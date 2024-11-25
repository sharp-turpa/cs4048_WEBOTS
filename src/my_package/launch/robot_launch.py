import os
import launch
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
from launch_ros.actions import PushROSNamespace
from launch.actions import GroupAction


def generate_launch_description():
    package_dir = get_package_share_directory('my_package')
    robot_description_path = os.path.join(package_dir, 'resource', 'my_robot.urdf')
    robot_description_path2 = os.path.join(package_dir, 'resource', 'my_robot2.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'my_world.wbt')
    )

    robot1_driver = GroupAction ([
        PushROSNamespace('robot1'),
        WebotsController(
            robot_name='my_robot',
            namespace='robot1',
            parameters=[
                {'robot_description': robot_description_path},
                {'namespace': 'robot1'},
            ]
            #remappings=[{'/cmd_vel/':'my_robot_1/cmd_vel'}]
        )
    ])

    robot1_obstacle_avoider  =GroupAction ([
        PushROSNamespace('robot1'),
    Node(
        package='my_package',
        executable='obstacle_avoider',
        namespace='robot1',
        name='obstacle_avoider',
        output='screen',
        parameters=[{'namespace': 'robot1'}],
    )])

    # robot2_driver = WebotsController(
    #     robot_name='my_robot_2',
    #     namespace='robot2',
    #     parameters=[
    #         {'robot_description': robot_description_path},
    #         {'namespace': 'robot2'},
    #     ]
    #     #remappings=[{'/cmd_vel/':'my_robot_2/cmd_vel'}]
    # )

    robot2_driver = GroupAction ([
        PushROSNamespace('robot2'),
        WebotsController(
            robot_name='my_robot_2',
            namespace='robot2',
            parameters=[
                {'robot_description': robot_description_path2},
                {'namespace': 'robot2'},
            ]
            #remappings=[{'/cmd_vel/':'my_robot_1/cmd_vel'}]
        )
    ])


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
        robot1_driver,
        robot1_obstacle_avoider,
        robot2_driver,
        robot2_obstacle_avoider,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        )
    ])
