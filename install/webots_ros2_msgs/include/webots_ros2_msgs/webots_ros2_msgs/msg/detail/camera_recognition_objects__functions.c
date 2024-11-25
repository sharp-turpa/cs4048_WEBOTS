// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObjects.idl
// generated code does not contain a copyright notice
#include "webots_ros2_msgs/msg/detail/camera_recognition_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "webots_ros2_msgs/msg/detail/camera_recognition_object__functions.h"

bool
webots_ros2_msgs__msg__CameraRecognitionObjects__init(webots_ros2_msgs__msg__CameraRecognitionObjects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    webots_ros2_msgs__msg__CameraRecognitionObjects__fini(msg);
    return false;
  }
  // objects
  if (!webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__init(&msg->objects, 0)) {
    webots_ros2_msgs__msg__CameraRecognitionObjects__fini(msg);
    return false;
  }
  return true;
}

void
webots_ros2_msgs__msg__CameraRecognitionObjects__fini(webots_ros2_msgs__msg__CameraRecognitionObjects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__fini(&msg->objects);
}

bool
webots_ros2_msgs__msg__CameraRecognitionObjects__are_equal(const webots_ros2_msgs__msg__CameraRecognitionObjects * lhs, const webots_ros2_msgs__msg__CameraRecognitionObjects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // objects
  if (!webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
webots_ros2_msgs__msg__CameraRecognitionObjects__copy(
  const webots_ros2_msgs__msg__CameraRecognitionObjects * input,
  webots_ros2_msgs__msg__CameraRecognitionObjects * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // objects
  if (!webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

webots_ros2_msgs__msg__CameraRecognitionObjects *
webots_ros2_msgs__msg__CameraRecognitionObjects__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObjects * msg = (webots_ros2_msgs__msg__CameraRecognitionObjects *)allocator.allocate(sizeof(webots_ros2_msgs__msg__CameraRecognitionObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_ros2_msgs__msg__CameraRecognitionObjects));
  bool success = webots_ros2_msgs__msg__CameraRecognitionObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_ros2_msgs__msg__CameraRecognitionObjects__destroy(webots_ros2_msgs__msg__CameraRecognitionObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_ros2_msgs__msg__CameraRecognitionObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__init(webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObjects * data = NULL;

  if (size) {
    data = (webots_ros2_msgs__msg__CameraRecognitionObjects *)allocator.zero_allocate(size, sizeof(webots_ros2_msgs__msg__CameraRecognitionObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_ros2_msgs__msg__CameraRecognitionObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_ros2_msgs__msg__CameraRecognitionObjects__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__fini(webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      webots_ros2_msgs__msg__CameraRecognitionObjects__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence *
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * array = (webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence *)allocator.allocate(sizeof(webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__destroy(webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__are_equal(const webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * lhs, const webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_ros2_msgs__msg__CameraRecognitionObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence__copy(
  const webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * input,
  webots_ros2_msgs__msg__CameraRecognitionObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_ros2_msgs__msg__CameraRecognitionObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_ros2_msgs__msg__CameraRecognitionObjects * data =
      (webots_ros2_msgs__msg__CameraRecognitionObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_ros2_msgs__msg__CameraRecognitionObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_ros2_msgs__msg__CameraRecognitionObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_ros2_msgs__msg__CameraRecognitionObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
