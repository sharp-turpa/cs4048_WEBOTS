// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from webots_ros2_msgs:srv/GetBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/srv/get_bool.hpp"


#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__GET_BOOL__BUILDER_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__GET_BOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "webots_ros2_msgs/srv/detail/get_bool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBool_Request_ask
{
public:
  Init_GetBool_Request_ask()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_ros2_msgs::srv::GetBool_Request ask(::webots_ros2_msgs::srv::GetBool_Request::_ask_type arg)
  {
    msg_.ask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::GetBool_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::GetBool_Request>()
{
  return webots_ros2_msgs::srv::builder::Init_GetBool_Request_ask();
}

}  // namespace webots_ros2_msgs


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBool_Response_value
{
public:
  Init_GetBool_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::webots_ros2_msgs::srv::GetBool_Response value(::webots_ros2_msgs::srv::GetBool_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::GetBool_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::GetBool_Response>()
{
  return webots_ros2_msgs::srv::builder::Init_GetBool_Response_value();
}

}  // namespace webots_ros2_msgs


namespace webots_ros2_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBool_Event_response
{
public:
  explicit Init_GetBool_Event_response(::webots_ros2_msgs::srv::GetBool_Event & msg)
  : msg_(msg)
  {}
  ::webots_ros2_msgs::srv::GetBool_Event response(::webots_ros2_msgs::srv::GetBool_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::webots_ros2_msgs::srv::GetBool_Event msg_;
};

class Init_GetBool_Event_request
{
public:
  explicit Init_GetBool_Event_request(::webots_ros2_msgs::srv::GetBool_Event & msg)
  : msg_(msg)
  {}
  Init_GetBool_Event_response request(::webots_ros2_msgs::srv::GetBool_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBool_Event_response(msg_);
  }

private:
  ::webots_ros2_msgs::srv::GetBool_Event msg_;
};

class Init_GetBool_Event_info
{
public:
  Init_GetBool_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBool_Event_request info(::webots_ros2_msgs::srv::GetBool_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBool_Event_request(msg_);
  }

private:
  ::webots_ros2_msgs::srv::GetBool_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::webots_ros2_msgs::srv::GetBool_Event>()
{
  return webots_ros2_msgs::srv::builder::Init_GetBool_Event_info();
}

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__GET_BOOL__BUILDER_HPP_
