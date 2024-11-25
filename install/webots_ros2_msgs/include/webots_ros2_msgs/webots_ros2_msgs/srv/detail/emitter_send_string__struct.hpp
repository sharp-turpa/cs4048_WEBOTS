// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from webots_ros2_msgs:srv/EmitterSendString.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "webots_ros2_msgs/srv/emitter_send_string.hpp"


#ifndef WEBOTS_ROS2_MSGS__SRV__DETAIL__EMITTER_SEND_STRING__STRUCT_HPP_
#define WEBOTS_ROS2_MSGS__SRV__DETAIL__EMITTER_SEND_STRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Request __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Request __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmitterSendString_Request_
{
  using Type = EmitterSendString_Request_<ContainerAllocator>;

  explicit EmitterSendString_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  explicit EmitterSendString_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
    }
  }

  // field types and members
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Request
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Request
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmitterSendString_Request_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmitterSendString_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmitterSendString_Request_

// alias to use template instance with default allocator
using EmitterSendString_Request =
  webots_ros2_msgs::srv::EmitterSendString_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_ros2_msgs


#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Response __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Response __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmitterSendString_Response_
{
  using Type = EmitterSendString_Response_<ContainerAllocator>;

  explicit EmitterSendString_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit EmitterSendString_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Response
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Response
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmitterSendString_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmitterSendString_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmitterSendString_Response_

// alias to use template instance with default allocator
using EmitterSendString_Response =
  webots_ros2_msgs::srv::EmitterSendString_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_ros2_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Event __attribute__((deprecated))
#else
# define DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Event __declspec(deprecated)
#endif

namespace webots_ros2_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EmitterSendString_Event_
{
  using Type = EmitterSendString_Event_<ContainerAllocator>;

  explicit EmitterSendString_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit EmitterSendString_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<webots_ros2_msgs::srv::EmitterSendString_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<webots_ros2_msgs::srv::EmitterSendString_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Event
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__webots_ros2_msgs__srv__EmitterSendString_Event
    std::shared_ptr<webots_ros2_msgs::srv::EmitterSendString_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmitterSendString_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmitterSendString_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmitterSendString_Event_

// alias to use template instance with default allocator
using EmitterSendString_Event =
  webots_ros2_msgs::srv::EmitterSendString_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace webots_ros2_msgs

namespace webots_ros2_msgs
{

namespace srv
{

struct EmitterSendString
{
  using Request = webots_ros2_msgs::srv::EmitterSendString_Request;
  using Response = webots_ros2_msgs::srv::EmitterSendString_Response;
  using Event = webots_ros2_msgs::srv::EmitterSendString_Event;
};

}  // namespace srv

}  // namespace webots_ros2_msgs

#endif  // WEBOTS_ROS2_MSGS__SRV__DETAIL__EMITTER_SEND_STRING__STRUCT_HPP_
