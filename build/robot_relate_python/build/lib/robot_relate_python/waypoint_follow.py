from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
import rclpy
from rclpy.duration import Duration

def main(args=None):
    rclpy.init(args=args)
    navigator = BasicNavigator()
    while True:
        navigator.waitUntilNav2Active()
        print("Nav2 is active. ")
        goal_poses = []
        goal_pose0 = PoseStamped()
        goal_pose0.header.frame_id = 'map'
        goal_pose0.pose.position.x = 6.0
        goal_pose0.pose.position.y = 0.0
        goal_pose0.pose.position.z = 0.0
        goal_pose0.pose.orientation.x = 0.0
        goal_pose0.pose.orientation.y = 0.0
        goal_pose0.pose.orientation.z = 0.0
        goal_pose0.pose.orientation.w = 1.0
        print("Goal pose set to: " + str(goal_pose0.pose))
        goal_poses.append(goal_pose0)

        goal_pose1 = PoseStamped()
        goal_pose1.header.frame_id = 'map'
        goal_pose1.pose.position.x = 6.0
        goal_pose1.pose.position.y = 3.0
        goal_pose1.pose.position.z = 0.0
        goal_pose1.pose.orientation.x = 0.0
        goal_pose1.pose.orientation.y = 0.0
        goal_pose1.pose.orientation.z = 0.0
        goal_pose1.pose.orientation.w = 1.0
        print("Goal pose set to: " + str(goal_pose1.pose))
        goal_poses.append(goal_pose1)
        goal_pose2 = PoseStamped()
        goal_pose2.header.frame_id = 'map'
        goal_pose2.pose.position.x = 3.0    
        goal_pose2.pose.position.y = 3.0
        goal_pose2.pose.position.z = 0.0
        goal_pose2.pose.orientation.x = 0.0
        goal_pose2.pose.orientation.y = 0.0
        goal_pose2.pose.orientation.z = 0.0
        goal_pose2.pose.orientation.w = 1.0
        print("Goal pose set to: " + str(goal_pose2.pose))
        goal_poses.append(goal_pose2)
        goal_pose3 = PoseStamped()
        goal_pose3.header.frame_id = 'map'
        goal_pose3.pose.position.x = 0.0    
        goal_pose3.pose.position.y = 0.0
        goal_pose3.pose.position.z = 0.0
        goal_pose3.pose.orientation.x = 0.0
        goal_pose3.pose.orientation.y = 0.0
        goal_pose3.pose.orientation.z = 0.0
        goal_pose3.pose.orientation.w = 1.0
        print("Goal pose set to: " + str(goal_pose3.pose))
        goal_poses.append(goal_pose3)
        navigator.followWaypoints(goal_poses)
        while not navigator.isTaskComplete():
            feedback = navigator.getFeedback()
            # if feedback is not None:
            #     navigator.get_logger().info(f"current waypoint: {feedback.current_waypoint}")
            rclpy.spin_once(navigator, timeout_sec=1)
        if navigator.getResult() == TaskResult.SUCCEEDED :
            print("All waypoints reached successfully!")
        elif navigator.getResult() == TaskResult.CANCELED:
            print("Waypoint following was canceled.")
            break
        elif navigator.getResult() == TaskResult.FAILED:
            print("Failed to reach all waypoints.")
            break
        else:
            print("Unknown result.")
    rclpy.shutdown()