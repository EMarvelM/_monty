#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @front: front of the stack
*/
void free_stack(stack_t *front)
{
	stack_t *_get_n;

	_get_n = front;
	while (front)
	{
		_get_n = front->next;
		free(front);
		front = _get_n;
	}
}
