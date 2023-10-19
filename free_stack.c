#include "monty.h"
/**
* freeStacks - frees a doubly linked list
* @front: front of the stack
*/
void freeStacks(stack_t *front)
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
