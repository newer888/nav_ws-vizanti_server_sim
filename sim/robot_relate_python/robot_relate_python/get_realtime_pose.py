import rclpy
from tf2_ros import Buffer, TransformListener
from tf_transformations import euler_from_quaternion


class TFListenerNode(rclpy.node.Node):
    def __init__(self):
        super().__init__('tf_listener_node')
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.timer = self.create_timer(1.0, self.timer_callback)
    
    def timer_callback(self):
        try:
            transform = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time(), rclpy.duration.Duration(seconds=1)   )
            translation = transform.transform.translation
            rotation = transform.transform.rotation
            roll, pitch, yaw = euler_from_quaternion([rotation.x, rotation.y, rotation.z, rotation.w])
            self.get_logger().info(f"Current Pose - x: {translation.x:.2f}, y: {translation.y:.2f}, yaw: {yaw:.2f} radians")
        except Exception as e:
            self.get_logger().warn(f"Could not get transform: {e}")


def main(args=None):
    rclpy.init(args=args)
    node = TFListenerNode()
    # rclpy.spin(node)
    rclpy.shutdown()