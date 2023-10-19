#include "monty.h"

/**
 * monty_nodemul - Multiplies the top two elements of the stack.
 * @front: Stack front
 * @numPop: Line number
 * Return: No return
 */
void monty_nodemul(stack_t **front, unsigned int numPop)
{
	/* Initialize variables */
	stack_t *n_clone = *front;
	int length = 0;
	int _get_n;

	/* Calculate the length of the stack */
	for (; n_clone != NULL; n_clone = n_clone->next)
	{
		length++;
	}

	/* Check if the stack has at least two elements */
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		freeStacks(*front);
		exit(EXIT_FAILURE);
	}

	/* Retrieve the top two elements, multiply, and update the stack */
	n_clone = *front;
	_get_n = n_clone->next->n * n_clone->n;
	n_clone->next->n = _get_n;
	*front = n_clone->next;
	free(n_clone);
}
