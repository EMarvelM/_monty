#include "monty.h"

/**
 * monty_nodepint - Prints the top element of the stack.
 * @front: Stack front
 * @numPop: Line number
 * Return: No return
 */
void monty_nodepint(stack_t **front, unsigned int numPop)
{
	if (*front == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		freeStacks(*front);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*front)->n);
}
