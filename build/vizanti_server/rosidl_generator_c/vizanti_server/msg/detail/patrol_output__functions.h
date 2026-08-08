// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vizanti_server:msg/PatrolOutput.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__FUNCTIONS_H_
#define VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vizanti_server/msg/rosidl_generator_c__visibility_control.h"

#include "vizanti_server/msg/detail/patrol_output__struct.h"

/// Initialize msg/PatrolOutput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vizanti_server__msg__PatrolOutput
 * )) before or use
 * vizanti_server__msg__PatrolOutput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__init(vizanti_server__msg__PatrolOutput * msg);

/// Finalize msg/PatrolOutput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
void
vizanti_server__msg__PatrolOutput__fini(vizanti_server__msg__PatrolOutput * msg);

/// Create msg/PatrolOutput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vizanti_server__msg__PatrolOutput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
vizanti_server__msg__PatrolOutput *
vizanti_server__msg__PatrolOutput__create();

/// Destroy msg/PatrolOutput message.
/**
 * It calls
 * vizanti_server__msg__PatrolOutput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
void
vizanti_server__msg__PatrolOutput__destroy(vizanti_server__msg__PatrolOutput * msg);

/// Check for msg/PatrolOutput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__are_equal(const vizanti_server__msg__PatrolOutput * lhs, const vizanti_server__msg__PatrolOutput * rhs);

/// Copy a msg/PatrolOutput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__copy(
  const vizanti_server__msg__PatrolOutput * input,
  vizanti_server__msg__PatrolOutput * output);

/// Initialize array of msg/PatrolOutput messages.
/**
 * It allocates the memory for the number of elements and calls
 * vizanti_server__msg__PatrolOutput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__Sequence__init(vizanti_server__msg__PatrolOutput__Sequence * array, size_t size);

/// Finalize array of msg/PatrolOutput messages.
/**
 * It calls
 * vizanti_server__msg__PatrolOutput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
void
vizanti_server__msg__PatrolOutput__Sequence__fini(vizanti_server__msg__PatrolOutput__Sequence * array);

/// Create array of msg/PatrolOutput messages.
/**
 * It allocates the memory for the array and calls
 * vizanti_server__msg__PatrolOutput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
vizanti_server__msg__PatrolOutput__Sequence *
vizanti_server__msg__PatrolOutput__Sequence__create(size_t size);

/// Destroy array of msg/PatrolOutput messages.
/**
 * It calls
 * vizanti_server__msg__PatrolOutput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
void
vizanti_server__msg__PatrolOutput__Sequence__destroy(vizanti_server__msg__PatrolOutput__Sequence * array);

/// Check for msg/PatrolOutput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__Sequence__are_equal(const vizanti_server__msg__PatrolOutput__Sequence * lhs, const vizanti_server__msg__PatrolOutput__Sequence * rhs);

/// Copy an array of msg/PatrolOutput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vizanti_server
bool
vizanti_server__msg__PatrolOutput__Sequence__copy(
  const vizanti_server__msg__PatrolOutput__Sequence * input,
  vizanti_server__msg__PatrolOutput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_SERVER__MSG__DETAIL__PATROL_OUTPUT__FUNCTIONS_H_
