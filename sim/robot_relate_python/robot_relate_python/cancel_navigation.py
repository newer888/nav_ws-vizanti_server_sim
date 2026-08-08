
from action_msgs.srv import CancelGoal

import rclpy
from rclpy.node import Node


class NavigationCanceler(Node):
    def __init__(self):
        super().__init__('navigation_canceler')
        self.cancel_clients = {
            'navigate_to_pose': self.create_client(
                CancelGoal, 'navigate_to_pose/_action/cancel_goal'),
            'navigate_through_poses': self.create_client(
                CancelGoal, 'navigate_through_poses/_action/cancel_goal'),
            'follow_waypoints': self.create_client(
                CancelGoal, 'follow_waypoints/_action/cancel_goal'),
            'follow_path': self.create_client(
                CancelGoal, 'follow_path/_action/cancel_goal'),
        }

    def cancel_active_goals(self):
        request = CancelGoal.Request()
        canceled_actions = []

        for action_name, client in self.cancel_clients.items():
            if not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().warning(
                    f'Cancel service for {action_name} is not available.')
                continue

            future = client.call_async(request)
            rclpy.spin_until_future_complete(self, future)
            response = future.result()

            if response is None:
                self.get_logger().warning(
                    f'No response from cancel service for {action_name}.')
                continue

            if response.goals_canceling:
                canceled_actions.append(action_name)
                self.get_logger().info(
                    f'Canceled {len(response.goals_canceling)} active goal(s) on '
                    f'{action_name}.')
            else:
                self.get_logger().info(
                    f'No active cancelable goal found on {action_name}.')

        return canceled_actions

def main(args=None):
    rclpy.init(args=args)
    canceler = NavigationCanceler()

    try:
        canceled_actions = canceler.cancel_active_goals()
        if canceled_actions:
            print('Navigation cancel request sent to: ' + ', '.join(canceled_actions))
        else:
            print('No active navigation goal was found to cancel.')
    finally:
        canceler.destroy_node()
        rclpy.shutdown()