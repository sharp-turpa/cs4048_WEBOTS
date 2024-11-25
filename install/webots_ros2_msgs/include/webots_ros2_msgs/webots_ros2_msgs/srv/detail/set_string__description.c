// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from webots_ros2_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#include "webots_ros2_msgs/srv/detail/set_string__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SetString__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x08, 0x84, 0x9d, 0x0e, 0x20, 0x1a, 0xfe,
      0x5d, 0xc0, 0x57, 0x2a, 0xfb, 0x8e, 0x6f, 0xc8,
      0x6d, 0x89, 0xda, 0x67, 0xba, 0x04, 0x35, 0x6b,
      0x26, 0xfe, 0xa3, 0x7e, 0x40, 0xc6, 0x9a, 0x34,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SetString_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0xdd, 0xb9, 0x1e, 0x52, 0x8f, 0x46, 0x07,
      0x5e, 0x1b, 0x81, 0xab, 0x0f, 0xef, 0xad, 0xd8,
      0x7d, 0x0d, 0x10, 0x27, 0x67, 0x1e, 0x9c, 0xc2,
      0x58, 0x68, 0x29, 0x22, 0x22, 0xe2, 0x5c, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SetString_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xb0, 0xa8, 0x54, 0x66, 0xf1, 0x0b, 0x7e,
      0x97, 0x93, 0x6c, 0x29, 0x2a, 0xb4, 0x65, 0xa7,
      0xca, 0x73, 0x64, 0xbd, 0xa5, 0x58, 0x2b, 0x54,
      0x44, 0xfd, 0x55, 0xf3, 0xb5, 0x3f, 0x91, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__SetString_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x7c, 0x1c, 0x02, 0x4b, 0xd5, 0x68, 0x15,
      0x11, 0x80, 0xbb, 0xd9, 0x80, 0x78, 0xf7, 0x1a,
      0x2b, 0xaf, 0x19, 0x81, 0xff, 0x4c, 0x1a, 0x77,
      0xef, 0xa8, 0x56, 0xa2, 0xf8, 0x47, 0xeb, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char webots_ros2_msgs__srv__SetString__TYPE_NAME[] = "webots_ros2_msgs/srv/SetString";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char webots_ros2_msgs__srv__SetString_Event__TYPE_NAME[] = "webots_ros2_msgs/srv/SetString_Event";
static char webots_ros2_msgs__srv__SetString_Request__TYPE_NAME[] = "webots_ros2_msgs/srv/SetString_Request";
static char webots_ros2_msgs__srv__SetString_Response__TYPE_NAME[] = "webots_ros2_msgs/srv/SetString_Response";

// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SetString__FIELD_NAME__request_message[] = "request_message";
static char webots_ros2_msgs__srv__SetString__FIELD_NAME__response_message[] = "response_message";
static char webots_ros2_msgs__srv__SetString__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SetString__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SetString__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__SetString_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__SetString__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SetString__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SetString__TYPE_NAME, 30, 30},
      {webots_ros2_msgs__srv__SetString__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__SetString__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__srv__SetString_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__SetString_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = webots_ros2_msgs__srv__SetString_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SetString_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SetString_Request__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SetString_Request__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SetString_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
      {webots_ros2_msgs__srv__SetString_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SetString_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SetString_Response__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SetString_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SetString_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
      {webots_ros2_msgs__srv__SetString_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__info[] = "info";
static char webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__request[] = "request";
static char webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__SetString_Event__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__SetString_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__SetString_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__SetString_Event__TYPE_NAME, 36, 36},
      {webots_ros2_msgs__srv__SetString_Event__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__SetString_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__srv__SetString_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__SetString_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string value\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SetString__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SetString__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SetString_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SetString_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SetString_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SetString_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__SetString_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__SetString_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SetString__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SetString__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__srv__SetString_Event__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__SetString_Request__get_individual_type_description_source(NULL);
    sources[5] = *webots_ros2_msgs__srv__SetString_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SetString_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SetString_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SetString_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SetString_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__SetString_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__SetString_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__srv__SetString_Request__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__SetString_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
