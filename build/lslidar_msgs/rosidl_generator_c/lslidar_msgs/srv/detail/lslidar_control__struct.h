// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:srv/LslidarControl.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__STRUCT_H_
#define LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LslidarControl in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__LslidarControl_Request
{
  int32_t laser_control;
} lslidar_msgs__srv__LslidarControl_Request;

// Struct for a sequence of lslidar_msgs__srv__LslidarControl_Request.
typedef struct lslidar_msgs__srv__LslidarControl_Request__Sequence
{
  lslidar_msgs__srv__LslidarControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__LslidarControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LslidarControl in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__LslidarControl_Response
{
  bool result;
} lslidar_msgs__srv__LslidarControl_Response;

// Struct for a sequence of lslidar_msgs__srv__LslidarControl_Response.
typedef struct lslidar_msgs__srv__LslidarControl_Response__Sequence
{
  lslidar_msgs__srv__LslidarControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__LslidarControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__SRV__DETAIL__LSLIDAR_CONTROL__STRUCT_H_
