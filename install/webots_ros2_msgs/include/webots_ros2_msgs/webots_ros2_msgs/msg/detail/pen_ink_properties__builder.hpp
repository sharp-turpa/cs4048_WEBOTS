// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:msg/PenInkProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/pen_ink_properties.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/msg/detail/pen_ink_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_PenInkProperties_density
{
public:
  explicit Init_PenInkProperties_density(::webots_ros2_msgs::msg::PenInkProperties & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::msg::PenInkProperties density(::webots_ros2_msgs::msg::PenInkProperties::_density_type arg)
  {
    msg_.density = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::msg::PenInkProperties msg_;
};

class Init_PenInkProperties_color
{
public:
  Init_PenInkProperties_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PenInkProperties_density color(::webots_ros2_msgs::msg::PenInkProperties::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_PenInkProperties_density(msg_);
  }

private:
  ::webots_ros2_msgs::msg::PenInkProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::msg::PenInkProperties>()
{
  return webots_ros2_msgs::msg::builder::Init_PenInkProperties_color();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__PEN_INK_PROPERTIES__BUILDER_HPP_
