#include "monty.h"

/**
 *monty_noderotr- rotates the stack to the bottom
 *@front: stack front
 *@numPop: line_number
 *Return: no return
 */
void monty_noderotr(stack_t **front, __attribute__((unused)) unsigned int numPop)
{
	stack_t *clone;

	clone = *front;
	if (*front == NULL || (*front)->next == NULL)
	{
		return;
	}
	while (clone->next)
	{
		clone = clone->next;
	}
	clone->next = *front;
	clone->prev->next = NULL;
	clone->prev = NULL;
	(*front)->prev = clone;
	(*front) = clone;
}
