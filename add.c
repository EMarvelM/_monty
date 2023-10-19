#include "monty.h"

/**
 * monty_nodeadd - Adds the top two elements of the stack.
 * @front: Stack front
 * @numPop: Line number
 * Return: No return
 */
void monty_nodeadd(stack_t **front, unsigned int numPop)
{
	/* Reordered the statements for readability*/
	stack_t *n_clone = *front;
	int length = 0, _get_n;

	/* Count the elements*/
	while (n_clone)
	{
		n_clone = n_clone->next;
		length++;
	}

	/* Check if the stack has at least 2 elements*/
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		freeStacks(*front);
		exit(EXIT_FAILURE);
	}

	/* Calculate the sum of the top two elements*/
	n_clone = *front;
	_get_n = n_clone->n + n_clone->next->n;
	n_clone->next->n = _get_n;
	*front = n_clone->next;
	free(n_clone);
}
