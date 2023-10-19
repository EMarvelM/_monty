#include "monty.h"
/**
 * f_pint - prints the top
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void f_pint(stack_t **front, unsigned int numPop)
{
	if (*front == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*front)->n);
}
