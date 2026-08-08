from setuptools import find_packages, setup

package_name = 'robot_relate_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='liwh4',
    maintainer_email='liwh4@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'set_initpose = robot_relate_python.set_initpose:main',
            'get_realtime_pose = robot_relate_python.get_realtime_pose:main',
            'navigation_to_pose = robot_relate_python.navigation_to_pose:main',
            'waypoint_follow = robot_relate_python.waypoint_follow:main',
            'cancel_navigation = robot_relate_python.cancel_navigation:main',
        ],
    },
)
