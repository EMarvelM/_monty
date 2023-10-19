#include "monty.h"
/**
 * f_pall - prints the stack
 * @front: stack front
 * @num_popped: no used
 * Return: no return
*/
void f_pall(stack_t **front, unsigned int num_popped)
{
	stack_t *h;
	(void)num_popped;

	h = *front;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
