// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/srv/set_string.hpp"


#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/srv/detail/set_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Request_value
{
public:
  Init_SetString_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_ros2_msgs::srv::SetString_Request value(::webots_ros2_msgs::srv::SetString_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::SetString_Request>()
{
  return webots_ros2_msgs::srv::builder::Init_SetString_Request_value();
}

}  // namespace webots_ros2_msgs


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Response_success
{
public:
  Init_SetString_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_ros2_msgs::srv::SetString_Response success(::webots_ros2_msgs::srv::SetString_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::SetString_Response>()
{
  return webots_ros2_msgs::srv::builder::Init_SetString_Response_success();
}

}  // namespace webots_ros2_msgs


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_SetString_Event_response
{
public:
  explicit Init_SetString_Event_response(::webots_ros2_msgs::srv::SetString_Event & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::srv::SetString_Event response(::webots_ros2_msgs::srv::SetString_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetString_Event msg_;
};

class Init_SetString_Event_request
{
public:
  explicit Init_SetString_Event_request(::webots_ros2_msgs::srv::SetString_Event & msg)
  : msg_(msg)
  {}
  Init_SetString_Event_response request(::webots_ros2_msgs::srv::SetString_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetString_Event_response(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetString_Event msg_;
};

class Init_SetString_Event_info
{
public:
  Init_SetString_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetString_Event_request info(::webots_ros2_msgs::srv::SetString_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetString_Event_request(msg_);
  }

private:
  ::webots_ros2_msgs::srv::SetString_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::SetString_Event>()
{
  return webots_ros2_msgs::srv::builder::Init_SetString_Event_info();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__SET_STRING__BUILDER_HPP_
