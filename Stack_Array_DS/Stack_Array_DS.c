
#include "Stack_Array_DS.h"
#include "Platform_Types.h"



stack_t *cearte_stack(uint32_t max_size,stack_status_t *ret_status);
stack_t *destroy_stack(stack_t *stack_obj,stack_status_t *ret_status);
stack_status_t PushStack (stack_t* stack_obj, void* itemPtr);
void* PopStack (stack_t* stack_obj, stack_status_t *ret_status);
void* StackTop (stack_t* stack_obj, stack_status_t *ret_status);
stack_status_t StackCount (stack_t* stack_obj, uint32_t *stack_count);
