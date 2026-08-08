from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator
import rclpy

def main(args=None):
    rclpy.init(args=args)
    navigator = BasicNavigator()
    
    initial_pose = PoseStamped()
    initial_pose.header.frame_id = 'map'
    initial_pose.pose.position.x = 0.0
    initial_pose.pose.position.y = 0.0
    initial_pose.pose.position.z = 0.0
    initial_pose.pose.orientation.x = 0.0
    initial_pose.pose.orientation.y = 0.0
    initial_pose.pose.orientation.z = 0.0
    initial_pose.pose.orientation.w = 1.0
    print("Initial pose set to: " + str(initial_pose.pose))
    navigator.setInitialPose(initial_pose)
    print("Initial pose has been set. ")
    navigator.waitUntilNav2Active()
    print("Nav2 is active. ")
    #rclpy.spin(navigator)
    rclpy.shutdown()