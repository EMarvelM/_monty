#include "monty.h"

/**
 * monty_nodepall - Prints the stack.
 * @front: Stack front
 * @numPop: Not used
 * Return: No return
 */
void monty_nodepall(stack_t **front, unsigned int numPop)
{
	stack_t *n_clone = *front;
	(void)numPop;

	if (n_clone == NULL)
		return;

	for (; n_clone != NULL; n_clone = n_clone->next)
	{
		printf("%d\n", n_clone->n);
	}
}
