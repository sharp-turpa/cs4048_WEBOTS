// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from webots_ros2_msgs:msg/CameraRecognitionObject.idl
// generated code does not contain a copyright notice
#include "webots_ros2_msgs/msg/detail/camera_recognition_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `bbox`
#include "vision_msgs/msg/detail/bounding_box2_d__functions.h"
// Member `colors`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `model`
#include "rosidl_runtime_c/string_functions.h"

bool
webots_ros2_msgs__msg__CameraRecognitionObject__init(webots_ros2_msgs__msg__CameraRecognitionObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    webots_ros2_msgs__msg__CameraRecognitionObject__fini(msg);
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox2D__init(&msg->bbox)) {
    webots_ros2_msgs__msg__CameraRecognitionObject__fini(msg);
    return false;
  }
  // colors
  if (!std_msgs__msg__ColorRGBA__Sequence__init(&msg->colors, 0)) {
    webots_ros2_msgs__msg__CameraRecognitionObject__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    webots_ros2_msgs__msg__CameraRecognitionObject__fini(msg);
    return false;
  }
  return true;
}

void
webots_ros2_msgs__msg__CameraRecognitionObject__fini(webots_ros2_msgs__msg__CameraRecognitionObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
  // bbox
  vision_msgs__msg__BoundingBox2D__fini(&msg->bbox);
  // colors
  std_msgs__msg__ColorRGBA__Sequence__fini(&msg->colors);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
}

bool
webots_ros2_msgs__msg__CameraRecognitionObject__are_equal(const webots_ros2_msgs__msg__CameraRecognitionObject * lhs, const webots_ros2_msgs__msg__CameraRecognitionObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox2D__are_equal(
      &(lhs->bbox), &(rhs->bbox)))
  {
    return false;
  }
  // colors
  if (!std_msgs__msg__ColorRGBA__Sequence__are_equal(
      &(lhs->colors), &(rhs->colors)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  return true;
}

bool
webots_ros2_msgs__msg__CameraRecognitionObject__copy(
  const webots_ros2_msgs__msg__CameraRecognitionObject * input,
  webots_ros2_msgs__msg__CameraRecognitionObject * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // bbox
  if (!vision_msgs__msg__BoundingBox2D__copy(
      &(input->bbox), &(output->bbox)))
  {
    return false;
  }
  // colors
  if (!std_msgs__msg__ColorRGBA__Sequence__copy(
      &(input->colors), &(output->colors)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  return true;
}

webots_ros2_msgs__msg__CameraRecognitionObject *
webots_ros2_msgs__msg__CameraRecognitionObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObject * msg = (webots_ros2_msgs__msg__CameraRecognitionObject *)allocator.allocate(sizeof(webots_ros2_msgs__msg__CameraRecognitionObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(webots_ros2_msgs__msg__CameraRecognitionObject));
  bool success = webots_ros2_msgs__msg__CameraRecognitionObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
webots_ros2_msgs__msg__CameraRecognitionObject__destroy(webots_ros2_msgs__msg__CameraRecognitionObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    webots_ros2_msgs__msg__CameraRecognitionObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__init(webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObject * data = NULL;

  if (size) {
    data = (webots_ros2_msgs__msg__CameraRecognitionObject *)allocator.zero_allocate(size, sizeof(webots_ros2_msgs__msg__CameraRecognitionObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = webots_ros2_msgs__msg__CameraRecognitionObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        webots_ros2_msgs__msg__CameraRecognitionObject__fini(&data[i - 1]);
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
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__fini(webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * array)
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
      webots_ros2_msgs__msg__CameraRecognitionObject__fini(&array->data[i]);
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

webots_ros2_msgs__msg__CameraRecognitionObject__Sequence *
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * array = (webots_ros2_msgs__msg__CameraRecognitionObject__Sequence *)allocator.allocate(sizeof(webots_ros2_msgs__msg__CameraRecognitionObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__destroy(webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__are_equal(const webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * lhs, const webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!webots_ros2_msgs__msg__CameraRecognitionObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
webots_ros2_msgs__msg__CameraRecognitionObject__Sequence__copy(
  const webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * input,
  webots_ros2_msgs__msg__CameraRecognitionObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(webots_ros2_msgs__msg__CameraRecognitionObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    webots_ros2_msgs__msg__CameraRecognitionObject * data =
      (webots_ros2_msgs__msg__CameraRecognitionObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!webots_ros2_msgs__msg__CameraRecognitionObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          webots_ros2_msgs__msg__CameraRecognitionObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!webots_ros2_msgs__msg__CameraRecognitionObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
