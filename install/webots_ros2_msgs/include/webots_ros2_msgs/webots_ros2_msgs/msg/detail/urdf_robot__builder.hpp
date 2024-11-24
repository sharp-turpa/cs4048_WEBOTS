// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:msg/UrdfRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/urdf_robot.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/msg/detail/urdf_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_UrdfRobot_init_pos
{
public:
  explicit Init_UrdfRobot_init_pos(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::msg::UrdfRobot init_pos(::webots_ros2_msgs::msg::UrdfRobot::_init_pos_type arg)
  {
    msg_.init_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_box_collision
{
public:
  explicit Init_UrdfRobot_box_collision(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_init_pos box_collision(::webots_ros2_msgs::msg::UrdfRobot::_box_collision_type arg)
  {
    msg_.box_collision = std::move(arg);
    return Init_UrdfRobot_init_pos(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_normal
{
public:
  explicit Init_UrdfRobot_normal(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_box_collision normal(::webots_ros2_msgs::msg::UrdfRobot::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_UrdfRobot_box_collision(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_rotation
{
public:
  explicit Init_UrdfRobot_rotation(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_normal rotation(::webots_ros2_msgs::msg::UrdfRobot::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_UrdfRobot_normal(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_translation
{
public:
  explicit Init_UrdfRobot_translation(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_rotation translation(::webots_ros2_msgs::msg::UrdfRobot::_translation_type arg)
  {
    msg_.translation = std::move(arg);
    return Init_UrdfRobot_rotation(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_relative_path_prefix
{
public:
  explicit Init_UrdfRobot_relative_path_prefix(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_translation relative_path_prefix(::webots_ros2_msgs::msg::UrdfRobot::_relative_path_prefix_type arg)
  {
    msg_.relative_path_prefix = std::move(arg);
    return Init_UrdfRobot_translation(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_robot_description
{
public:
  explicit Init_UrdfRobot_robot_description(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_relative_path_prefix robot_description(::webots_ros2_msgs::msg::UrdfRobot::_robot_description_type arg)
  {
    msg_.robot_description = std::move(arg);
    return Init_UrdfRobot_relative_path_prefix(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_urdf_path
{
public:
  explicit Init_UrdfRobot_urdf_path(::webots_ros2_msgs::msg::UrdfRobot & msg)
  : msg_(msg)
  {}
  Init_UrdfRobot_robot_description urdf_path(::webots_ros2_msgs::msg::UrdfRobot::_urdf_path_type arg)
  {
    msg_.urdf_path = std::move(arg);
    return Init_UrdfRobot_robot_description(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

class Init_UrdfRobot_name
{
public:
  Init_UrdfRobot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UrdfRobot_urdf_path name(::webots_ros2_msgs::msg::UrdfRobot::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_UrdfRobot_urdf_path(msg_);
  }

private:
  ::webots_ros2_msgs::msg::UrdfRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::msg::UrdfRobot>()
{
  return webots_ros2_msgs::msg::builder::Init_UrdfRobot_name();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__URDF_ROBOT__BUILDER_HPP_
