#!/usr/bin/env python3
import json
import math
from pathlib import Path

import rclpy
from nav_msgs.msg import OccupancyGrid
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, HistoryPolicy, QoSProfile, ReliabilityPolicy


class DynamicKeepoutMaskServer(Node):
    def __init__(self):
        super().__init__('dynamic_keepout_mask_server')

        self.declare_parameter(
            'geojson_path',
            '/user_space/nav/robot-nav/robot_config/robot_1/keepout/keepout.geojson')
        self.declare_parameter('map_yaml_path', '')
        self.declare_parameter('topic_name', '/keepout_filter_mask')
        self.declare_parameter('frame_id', 'map')
        self.declare_parameter('poll_period', 1.0)

        self.geojson_path = Path(self.get_parameter('geojson_path').value)
        self.map_yaml_path = Path(self.get_parameter('map_yaml_path').value)
        self.topic_name = self.get_parameter('topic_name').value
        self.frame_id = self.get_parameter('frame_id').value
        self.poll_period = float(self.get_parameter('poll_period').value)

        qos = QoSProfile(
            history=HistoryPolicy.KEEP_LAST,
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL)
        self.publisher = self.create_publisher(OccupancyGrid, self.topic_name, qos)

        self._last_signature = None
        self._last_msg = None
        self._timer = self.create_timer(self.poll_period, self._publish_if_needed)
        self._publish_if_needed(force=True)

    def _publish_if_needed(self, force=False):
        signature = self._get_file_signature()
        if not force and signature == self._last_signature:
            return

        try:
            msg = self._build_mask_msg()
        except Exception as exc:
            self.get_logger().error(f'Failed to build keepout mask: {exc}')
            return

        self.publisher.publish(msg)
        self._last_msg = msg
        self._last_signature = signature
        blocked_cells = sum(1 for value in msg.data if value == 100)
        self.get_logger().info(
            f'Published keepout mask: topic={self.topic_name}, size={msg.info.width}x{msg.info.height}, '
            f'resolution={msg.info.resolution}, blocked_cells={blocked_cells}')

    def _get_file_signature(self):
        signature = []
        for path in [self.geojson_path, self.map_yaml_path, self._get_map_image_path(silent=True)]:
            if path is None:
                signature.append(None)
                continue
            try:
                stat = path.stat()
                signature.append((str(path), stat.st_mtime_ns, stat.st_size))
            except FileNotFoundError:
                signature.append((str(path), None, None))
        return tuple(signature)

    def _build_mask_msg(self):
        map_info = self._load_map_info()
        features = self._load_keepout_features()

        width = map_info['width']
        height = map_info['height']
        resolution = map_info['resolution']
        origin_x = map_info['origin'][0]
        origin_y = map_info['origin'][1]

        data = [0] * (width * height)
        for feature in features:
            geometry = feature.get('geometry') or {}
            geometry_type = geometry.get('type')
            coordinates = geometry.get('coordinates') or []
            if geometry_type == 'Polygon':
                self._rasterize_polygon(coordinates, data, width, height, resolution, origin_x, origin_y)
            elif geometry_type == 'MultiPolygon':
                for polygon in coordinates:
                    self._rasterize_polygon(polygon, data, width, height, resolution, origin_x, origin_y)
            else:
                self.get_logger().warn(f'Skip unsupported keepout geometry type: {geometry_type}')

        msg = OccupancyGrid()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self.frame_id
        msg.info.resolution = resolution
        msg.info.width = width
        msg.info.height = height
        msg.info.origin.position.x = origin_x
        msg.info.origin.position.y = origin_y
        msg.info.origin.position.z = 0.0
        msg.info.origin.orientation.w = 1.0
        msg.data = data
        return msg

    def _load_map_info(self):
        if not self.map_yaml_path:
            raise ValueError('map_yaml_path is empty')
        if not self.map_yaml_path.exists():
            raise FileNotFoundError(f'map yaml not found: {self.map_yaml_path}')

        values = self._read_simple_map_yaml(self.map_yaml_path)
        image_path = self._get_map_image_path(values=values)
        width, height = self._read_pgm_size(image_path)

        return {
            'resolution': float(values['resolution']),
            'origin': values['origin'],
            'width': width,
            'height': height,
        }

    def _read_simple_map_yaml(self, path):
        values = {}
        with path.open('r', encoding='utf-8') as stream:
            for raw_line in stream:
                line = raw_line.split('#', 1)[0].strip()
                if not line or ':' not in line:
                    continue
                key, value = line.split(':', 1)
                key = key.strip()
                value = value.strip()
                if key == 'image':
                    values['image'] = value.strip('"\'')
                elif key == 'resolution':
                    values['resolution'] = float(value)
                elif key == 'origin':
                    values['origin'] = self._parse_origin(value)

        missing_keys = [key for key in ['image', 'resolution', 'origin'] if key not in values]
        if missing_keys:
            raise ValueError(f'map yaml missing keys: {missing_keys}')
        return values

    def _parse_origin(self, value):
        text = value.strip()
        if not text.startswith('[') or not text.endswith(']'):
            raise ValueError(f'invalid origin format: {value}')
        parts = [part.strip() for part in text[1:-1].split(',')]
        if len(parts) < 2:
            raise ValueError(f'invalid origin value: {value}')
        origin = [float(part) for part in parts]
        while len(origin) < 3:
            origin.append(0.0)
        return origin[:3]

    def _get_map_image_path(self, silent=False, values=None):
        try:
            if values is None:
                if not self.map_yaml_path.exists():
                    return None
                values = self._read_simple_map_yaml(self.map_yaml_path)
            image_path = Path(values['image'])
            if not image_path.is_absolute():
                image_path = self.map_yaml_path.parent / image_path
            return image_path
        except Exception:
            if silent:
                return None
            raise

    def _read_pgm_size(self, path):
        if not path.exists():
            raise FileNotFoundError(f'map image not found: {path}')

        with path.open('rb') as stream:
            magic = stream.readline().strip()
            if magic not in [b'P2', b'P5']:
                raise ValueError(f'unsupported map image format: {magic!r}')

            tokens = []
            while len(tokens) < 2:
                line = stream.readline()
                if not line:
                    break
                line = line.split(b'#', 1)[0].strip()
                if not line:
                    continue
                tokens.extend(line.split())

        if len(tokens) < 2:
            raise ValueError(f'cannot read map image size: {path}')
        return int(tokens[0]), int(tokens[1])

    def _load_keepout_features(self):
        if not self.geojson_path.exists():
            self.get_logger().warn(f'keepout geojson not found, publish empty mask: {self.geojson_path}')
            return []

        with self.geojson_path.open('r', encoding='utf-8') as stream:
            data = json.load(stream)

        if data.get('type') != 'FeatureCollection':
            self.get_logger().warn('keepout geojson is not FeatureCollection, publish empty mask')
            return []
        features = data.get('features')
        if not isinstance(features, list):
            return []
        return [feature for feature in features if isinstance(feature, dict)]

    def _rasterize_polygon(self, polygon, data, width, height, resolution, origin_x, origin_y):
        rings = self._normalize_polygon_rings(polygon)
        if not rings:
            return

        exterior = rings[0]
        holes = rings[1:]
        min_x = min(point[0] for point in exterior)
        max_x = max(point[0] for point in exterior)
        min_y = min(point[1] for point in exterior)
        max_y = max(point[1] for point in exterior)

        min_mx = max(0, int(math.floor((min_x - origin_x) / resolution)))
        max_mx = min(width - 1, int(math.floor((max_x - origin_x) / resolution)))
        min_my = max(0, int(math.floor((min_y - origin_y) / resolution)))
        max_my = min(height - 1, int(math.floor((max_y - origin_y) / resolution)))

        if min_mx > max_mx or min_my > max_my:
            return

        for my in range(min_my, max_my + 1):
            y = origin_y + (my + 0.5) * resolution
            for mx in range(min_mx, max_mx + 1):
                x = origin_x + (mx + 0.5) * resolution
                if not self._point_in_ring(x, y, exterior):
                    continue
                if any(self._point_in_ring(x, y, hole) for hole in holes):
                    continue
                data[my * width + mx] = 100

    def _normalize_polygon_rings(self, polygon):
        if not isinstance(polygon, list):
            return []

        rings = []
        for ring in polygon:
            if not isinstance(ring, list):
                continue
            points = []
            for point in ring:
                if not isinstance(point, list) or len(point) < 2:
                    continue
                try:
                    points.append((float(point[0]), float(point[1])))
                except (TypeError, ValueError):
                    continue
            if len(points) < 3:
                continue
            if points[0] != points[-1]:
                points.append(points[0])
            rings.append(points)
        return rings

    def _point_in_ring(self, x, y, ring):
        inside = False
        j = len(ring) - 1
        for i in range(len(ring)):
            xi, yi = ring[i]
            xj, yj = ring[j]
            intersects = ((yi > y) != (yj > y)) and (
                x < (xj - xi) * (y - yi) / ((yj - yi) or 1e-12) + xi)
            if intersects:
                inside = not inside
            j = i
        return inside


def main(args=None):
    rclpy.init(args=args)
    node = DynamicKeepoutMaskServer()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
