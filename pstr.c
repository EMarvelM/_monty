#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @front: stack front
 * @num_popped: line_number
 * Return: no return
*/
void f_pstr(stack_t **front, unsigned int num_popped)
{
	stack_t *h;
	(void)num_popped;

	h = *front;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
