#include "monty.h"

/**
 * freeStacks - Frees a doubly linked list
 * @front: Front of the stack
 */
void freeStacks(stack_t *front)
{
	stack_t *_get_n;

	for (_get_n = front; front != NULL; front = _get_n)
	{
		_get_n = front->next;
		free(front);
	}
}
