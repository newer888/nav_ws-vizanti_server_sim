

from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
import rclpy
from rclpy.duration import Duration


def main(args=None):
    rclpy.init(args=args)
    navigator = BasicNavigator()
    
    navigator.waitUntilNav2Active()
    print("Nav2 is active. ")

    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.pose.position.x = 6.0
    goal_pose.pose.position.y = 0.0
    goal_pose.pose.position.z = 0.0
    goal_pose.pose.orientation.x = 0.0
    goal_pose.pose.orientation.y = 0.0
    goal_pose.pose.orientation.z = 0.0
    goal_pose.pose.orientation.w = 1.0
    print("Goal pose set to: " + str(goal_pose.pose))
    navigator.goToPose(goal_pose)
    while not navigator.isTaskComplete():
        feedback = navigator.getFeedback()
        navigator.get_logger().info(f"Distance remaining: {feedback.distance_remaining:.2f} m")
        rclpy.spin_once(navigator, timeout_sec=0.2)
        if Duration.from_msg(feedback.navigation_time) > Duration(seconds=60):
            navigator.cancelTask()

    result = navigator.getResult()
    if result == TaskResult.SUCCEEDED:
        print("Goal reached successfully!")
    elif result == TaskResult.CANCELED:
        print("Goal was canceled.")
    elif result == TaskResult.FAILED:
        print("Failed to reach the goal.")
    else:
        print("Unknown result.")