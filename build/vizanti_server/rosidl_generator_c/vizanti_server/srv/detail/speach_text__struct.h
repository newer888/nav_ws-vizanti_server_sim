// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_server:srv/SpeachText.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_
#define VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpeachText in the package vizanti_server.
typedef struct vizanti_server__srv__SpeachText_Request
{
  /// 合成文字
  rosidl_runtime_c__String text;
} vizanti_server__srv__SpeachText_Request;

// Struct for a sequence of vizanti_server__srv__SpeachText_Request.
typedef struct vizanti_server__srv__SpeachText_Request__Sequence
{
  vizanti_server__srv__SpeachText_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_server__srv__SpeachText_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SpeachText in the package vizanti_server.
typedef struct vizanti_server__srv__SpeachText_Response
{
  /// 合成结果
  bool result;
} vizanti_server__srv__SpeachText_Response;

// Struct for a sequence of vizanti_server__srv__SpeachText_Response.
typedef struct vizanti_server__srv__SpeachText_Response__Sequence
{
  vizanti_server__srv__SpeachText_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_server__srv__SpeachText_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_SERVER__SRV__DETAIL__SPEACH_TEXT__STRUCT_H_
