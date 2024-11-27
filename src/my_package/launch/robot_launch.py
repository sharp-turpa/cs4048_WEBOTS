import os
import launch
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
import launch.actions
import launch.event_handlers
import launch.events


def generate_launch_description():
    package_dir = get_package_share_directory('my_package')
    robot_description_path = os.path.join(package_dir, 'resource', 'my_robot.urdf')
    robot2_description_path = os.path.join(package_dir, 'resource', 'my_robot_2.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'my_world.wbt')
    )

    my_robot_driver = WebotsController(
        robot_name='my_robot',
        parameters=[
            {'robot_description': robot_description_path},
        ]
    )
   
    second_robot_driver = WebotsController(
        robot_name='my_robot_2',
        parameters=[
            {'robot_description': robot2_description_path},
        ]
    )

    obstacle_avoider = Node(
        package='my_package',
        executable='obstacle_avoider',
    )

    obstacle_avoider2 = Node(
        package='my_package',
        executable='obstacle_avoider2',
    )

    flag_controller = Node(
        package='my_package',
        executable='flag_controller',
    )


    return LaunchDescription([
        webots,
        my_robot_driver,
        second_robot_driver,
        obstacle_avoider,
        obstacle_avoider2,
        flag_controller,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])