#include "monty.h"
/**
 * f_pint - prints the top
 * @front: stack front
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **front, unsigned int counter)
{
	if (*front == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*front)->n);
}
