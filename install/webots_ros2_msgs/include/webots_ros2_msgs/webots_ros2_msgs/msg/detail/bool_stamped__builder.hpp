// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/msg/bool_stamped.hpp"


#ifndef WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/msg/detail/bool_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace msg
{

namespace builder
{

class Init_BoolStamped_data
{
public:
  explicit Init_BoolStamped_data(::webots_ros2_msgs::msg::BoolStamped & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::msg::BoolStamped data(::webots_ros2_msgs::msg::BoolStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::msg::BoolStamped msg_;
};

class Init_BoolStamped_header
{
public:
  Init_BoolStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoolStamped_data header(::webots_ros2_msgs::msg::BoolStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoolStamped_data(msg_);
  }

private:
  ::webots_ros2_msgs::msg::BoolStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::msg::BoolStamped>()
{
  return webots_ros2_msgs::msg::builder::Init_BoolStamped_header();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__MSG__DETAIL__BOOL_STAMPED__BUILDER_HPP_
