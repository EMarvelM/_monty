#include "monty.h"
/**
 * f_pop - prints the top
 * @front: stack front
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **front, unsigned int counter)
{
	stack_t *h;

	if (*front == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	h = *front;
	*front = h->next;
	free(h);
}
