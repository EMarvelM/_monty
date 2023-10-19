#include "monty.h"
/**
 * f_pall - prints the stack
 * @front: stack front
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **front, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *front;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
