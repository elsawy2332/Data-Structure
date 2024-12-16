
#ifndef STACK_ARRAY_DS_H
#define STACK_ARRAY_DS_H
#include "Platform_Types.h"

typedef struct {
void **stack_array;
sint32_t element_count;
uint32_t stack_max_size;
sint32_t stack_top;
stack_t};

typedef enum{
STACK_NOK = 0,
STACK_OK,
STACK_FULL,
STACK_EMPTY,
STACK_NULL_POINTER
}stack_status_t;

/**
  * @brief  This algorithm creates an empty stack by allocating the head
            structure and the array from dynamic memory.
  * @param  (maxSize) Stack maximum number of elements
  * @param  (ret_status) Status returned while performing this operation
  * @retval Pointer to the allocated stack in the heap
  */
stack_t *cearte_stack(uint32_t max_size,stack_status_t *ret_status);


/**
  * @brief  This function releases all memory to the heap.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (ret_status) Status returned while performing this operation
  * @retval NULL
  */
stack_t *destroy_stack(stack_t *stack_obj,stack_status_t *ret_status);

/**
  * @brief This function pushes an item onto the stack.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (itemPtr) pointer to be inserted
  * @retval Status returned while performing this operation
  */
stack_status_t PushStack (stack_t* stack_obj, void* itemPtr);

/**
  * @brief This function pops the item on the top of the stack.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (ret_status) Status returned while performing this operation
  * @retval Pointer to user data if successful, NULL if underflow
  */
void* PopStack (stack_t* stack_obj, stack_status_t *ret_status);

/**
  * @brief  This function retrieves the data from the top of the
            stack without changing the stack.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (ret_status) Status returned while performing this operation
  * @retval Pointer to user data if successful, NULL if underflow
  */
void* StackTop (stack_t* stack_obj, stack_status_t *ret_status);
/**
  * @brief  Returns number of elements in stack.
  * @param  (stack_obj) pointer to stack head structure
  * @param  (stack_count) number of elements in stack.
  * @retval Status returned while performing this operation
  */
stack_status_t StackCount (stack_t* stack_obj, uint32_t *stack_count);



#endif // STACK_ARRAY_DS_H
