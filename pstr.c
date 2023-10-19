#include "monty.h"
/**
 * monty_nodepstr - prints the string starting at the top of the stack,
 * followed by a new
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void monty_nodepstr(stack_t **front, unsigned int numPop)
{
	stack_t *n_clone;
	(void)numPop;

	n_clone = *front;
	while (n_clone)
	{
		if (n_clone->n > 127 || n_clone->n <= 0)
		{
			break;
		}
		printf("%c", n_clone->n);
		n_clone = n_clone->next;
	}
	printf("\n");
}
