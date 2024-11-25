// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from webots_ros2_msgs:srv/GetBool.idl
// generated code does not contain a copyright notice

#include "webots_ros2_msgs/srv/detail/get_bool__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__GetBool__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x06, 0x74, 0x03, 0x36, 0xb1, 0xaf, 0xb6,
      0x86, 0x4d, 0xe1, 0x30, 0x32, 0xb7, 0x03, 0x96,
      0xb8, 0x8d, 0x5e, 0x2a, 0xa3, 0x16, 0xd9, 0x60,
      0xc0, 0x49, 0x20, 0xf8, 0xe9, 0x35, 0xaa, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__GetBool_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xbc, 0x94, 0x03, 0x85, 0x54, 0x4b, 0xb2,
      0x34, 0x35, 0xc1, 0x8b, 0xe0, 0xb6, 0xf5, 0xb4,
      0x29, 0xf8, 0xf9, 0x1e, 0x85, 0x12, 0x72, 0xee,
      0x11, 0xb5, 0xae, 0x0f, 0x90, 0x23, 0x54, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__GetBool_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x36, 0x47, 0x30, 0xb0, 0xd1, 0x56, 0x93,
      0xf5, 0xff, 0x2c, 0xef, 0x24, 0xfb, 0x56, 0x75,
      0x70, 0xc8, 0x95, 0xee, 0x43, 0xb5, 0xed, 0x0c,
      0x76, 0x70, 0xc1, 0xf0, 0xc6, 0x3b, 0xcf, 0xbe,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_webots_ros2_msgs
const rosidl_type_hash_t *
webots_ros2_msgs__srv__GetBool_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0xe0, 0xda, 0x84, 0x1b, 0x47, 0xe2, 0xd3,
      0xa0, 0xf6, 0xe3, 0xc5, 0x4a, 0x88, 0x4b, 0x0d,
      0xe7, 0x45, 0x0f, 0x21, 0x27, 0xfe, 0x9e, 0x91,
      0xb1, 0x60, 0x77, 0x23, 0xa8, 0x17, 0xb1, 0x21,
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

static char webots_ros2_msgs__srv__GetBool__TYPE_NAME[] = "webots_ros2_msgs/srv/GetBool";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char webots_ros2_msgs__srv__GetBool_Event__TYPE_NAME[] = "webots_ros2_msgs/srv/GetBool_Event";
static char webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME[] = "webots_ros2_msgs/srv/GetBool_Request";
static char webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME[] = "webots_ros2_msgs/srv/GetBool_Response";

// Define type names, field names, and default values
static char webots_ros2_msgs__srv__GetBool__FIELD_NAME__request_message[] = "request_message";
static char webots_ros2_msgs__srv__GetBool__FIELD_NAME__response_message[] = "response_message";
static char webots_ros2_msgs__srv__GetBool__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__GetBool__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__GetBool__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {webots_ros2_msgs__srv__GetBool_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__GetBool__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__GetBool__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__GetBool__TYPE_NAME, 28, 28},
      {webots_ros2_msgs__srv__GetBool__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__GetBool__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__srv__GetBool_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__GetBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = webots_ros2_msgs__srv__GetBool_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__GetBool_Request__FIELD_NAME__ask[] = "ask";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__GetBool_Request__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__GetBool_Request__FIELD_NAME__ask, 3, 3},
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
webots_ros2_msgs__srv__GetBool_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
      {webots_ros2_msgs__srv__GetBool_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__GetBool_Response__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__GetBool_Response__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__GetBool_Response__FIELD_NAME__value, 5, 5},
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
webots_ros2_msgs__srv__GetBool_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
      {webots_ros2_msgs__srv__GetBool_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__info[] = "info";
static char webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__request[] = "request";
static char webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field webots_ros2_msgs__srv__GetBool_Event__FIELDS[] = {
  {
    {webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription webots_ros2_msgs__srv__GetBool_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
webots_ros2_msgs__srv__GetBool_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {webots_ros2_msgs__srv__GetBool_Event__TYPE_NAME, 34, 34},
      {webots_ros2_msgs__srv__GetBool_Event__FIELDS, 3, 3},
    },
    {webots_ros2_msgs__srv__GetBool_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = webots_ros2_msgs__srv__GetBool_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = webots_ros2_msgs__srv__GetBool_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool ask\n"
  "---\n"
  "bool value";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__GetBool__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__GetBool__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__GetBool_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__GetBool_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__GetBool_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__GetBool_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
webots_ros2_msgs__srv__GetBool_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {webots_ros2_msgs__srv__GetBool_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__GetBool__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__GetBool__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__srv__GetBool_Event__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__GetBool_Request__get_individual_type_description_source(NULL);
    sources[5] = *webots_ros2_msgs__srv__GetBool_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__GetBool_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__GetBool_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__GetBool_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__GetBool_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
webots_ros2_msgs__srv__GetBool_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *webots_ros2_msgs__srv__GetBool_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *webots_ros2_msgs__srv__GetBool_Request__get_individual_type_description_source(NULL);
    sources[4] = *webots_ros2_msgs__srv__GetBool_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
