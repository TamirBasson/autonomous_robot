// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lslidar_msgs:srv/DataPort.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lslidar_msgs/srv/detail/data_port__rosidl_typesupport_introspection_c.h"
#include "lslidar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lslidar_msgs/srv/detail/data_port__functions.h"
#include "lslidar_msgs/srv/detail/data_port__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_msgs__srv__DataPort_Request__init(message_memory);
}

void lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_fini_function(void * message_memory)
{
  lslidar_msgs__srv__DataPort_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_member_array[1] = {
  {
    "data_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs__srv__DataPort_Request, data_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_members = {
  "lslidar_msgs__srv",  // message namespace
  "DataPort_Request",  // message name
  1,  // number of fields
  sizeof(lslidar_msgs__srv__DataPort_Request),
  lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_member_array,  // message members
  lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_type_support_handle = {
  0,
  &lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Request)() {
  if (!lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_type_support_handle.typesupport_identifier) {
    lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lslidar_msgs__srv__DataPort_Request__rosidl_typesupport_introspection_c__DataPort_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lslidar_msgs/srv/detail/data_port__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lslidar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lslidar_msgs/srv/detail/data_port__functions.h"
// already included above
// #include "lslidar_msgs/srv/detail/data_port__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lslidar_msgs__srv__DataPort_Response__init(message_memory);
}

void lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_fini_function(void * message_memory)
{
  lslidar_msgs__srv__DataPort_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lslidar_msgs__srv__DataPort_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_members = {
  "lslidar_msgs__srv",  // message namespace
  "DataPort_Response",  // message name
  1,  // number of fields
  sizeof(lslidar_msgs__srv__DataPort_Response),
  lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_member_array,  // message members
  lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_type_support_handle = {
  0,
  &lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Response)() {
  if (!lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_type_support_handle.typesupport_identifier) {
    lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lslidar_msgs__srv__DataPort_Response__rosidl_typesupport_introspection_c__DataPort_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lslidar_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lslidar_msgs/srv/detail/data_port__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_members = {
  "lslidar_msgs__srv",  // service namespace
  "DataPort",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_Request_message_type_support_handle,
  NULL  // response message
  // lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_Response_message_type_support_handle
};

static rosidl_service_type_support_t lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_type_support_handle = {
  0,
  &lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lslidar_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort)() {
  if (!lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_type_support_handle.typesupport_identifier) {
    lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lslidar_msgs, srv, DataPort_Response)()->data;
  }

  return &lslidar_msgs__srv__detail__data_port__rosidl_typesupport_introspection_c__DataPort_service_type_support_handle;
}
