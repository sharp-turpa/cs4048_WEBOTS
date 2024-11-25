import os
import launch
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
from launch_ros.actions import PushROSNamespace


def generate_launch_description():
    package_dir = get_package_share_directory('my_package')
    robot_description_path = os.path.join(package_dir, 'resource', 'my_robot.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'my_world.wbt')
    )

    robot1_driver = WebotsController(
        robot_name='my_robot',
        namespace='robot1',
        parameters=[
            {'robot_description': robot_description_path},
            {'namespace': 'robot1'},
        ],
    )

    robot1_obstacle_avoider = Node(
        package='my_package',
        executable='obstacle_avoider',
        namespace='robot1',
        name='obstacle_avoider',
        output='screen',
        parameters=[{'namespace': 'robot1'}],
    )

    robot2_driver = WebotsController(
        robot_name='my_robot_2',
        namespace='robot2',
        parameters=[
            {'robot_description': robot_description_path},
            {'namespace': 'robot2'},
        ],
    )

    robot2_obstacle_avoider = Node(
        package='my_package',
        executable='obstacle_avoider',
        namespace='robot2',
        name='obstacle_avoider',
        output='screen',
        parameters=[{'namespace': 'robot2'}],
    )

    return LaunchDescription([
        webots,
        PushROSNamespace('robot1'),
        robot1_driver,
        robot1_obstacle_avoider,
        PushROSNamespace('robot2'),
        robot2_driver,
        robot2_obstacle_avoider,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])
