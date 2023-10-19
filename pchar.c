#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @front: stack front
 * @num_popped: line_number
 * Return: no return
*/
void f_pchar(stack_t **front, unsigned int num_popped)
{
	stack_t *h;

	h = *front;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", num_popped);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", num_popped);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
