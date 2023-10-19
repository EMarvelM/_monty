#include "monty.h"
/**
 * f_pop - prints the top
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void f_pop(stack_t **front, unsigned int numPop)
{
	stack_t *n_clone;

	if (*front == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	n_clone = *front;
	*front = n_clone->next;
	free(n_clone);
}
