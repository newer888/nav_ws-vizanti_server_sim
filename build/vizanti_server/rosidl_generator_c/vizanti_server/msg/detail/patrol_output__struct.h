// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_H_
#define VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PATROL_STATUS_UN_INITIAL'.
enum
{
  vizanti_server__msg__PatrolOutput__PATROL_STATUS_UN_INITIAL = 0
};

/// Constant 'PATROL_STATUS_READY'.
enum
{
  vizanti_server__msg__PatrolOutput__PATROL_STATUS_READY = 1
};

/// Constant 'PATROL_STATUS_SETTING_ROUTE'.
enum
{
  vizanti_server__msg__PatrolOutput__PATROL_STATUS_SETTING_ROUTE = 2
};

/// Constant 'PATROL_STATUS_PATROLLING'.
enum
{
  vizanti_server__msg__PatrolOutput__PATROL_STATUS_PATROLLING = 3
};

/// Struct defined in msg/PatrolOutput in the package vizanti_server.
typedef struct vizanti_server__msg__PatrolOutput
{
  uint8_t patrol_status;
  uint32_t route_id;
} vizanti_server__msg__PatrolOutput;

// Struct for a sequence of vizanti_server__msg__PatrolOutput.
typedef struct vizanti_server__msg__PatrolOutput__Sequence
{
  vizanti_server__msg__PatrolOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_server__msg__PatrolOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__STRUCT_H_
