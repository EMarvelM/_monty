#include "monty.h"
/**
 * monty_nodeswap - adds the top two elements of the stack.
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void monty_nodeswap(stack_t **front, unsigned int numPop)
{
	stack_t *n_clone;
	int length = 0, _get_n;

	n_clone = *front;
	while (n_clone)
	{
		n_clone = n_clone->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		freeStacks(*front);
		exit(EXIT_FAILURE);
	}
	n_clone = *front;
	_get_n = n_clone->n;
	n_clone->n = n_clone->next->n;
	n_clone->next->n = _get_n;
}
