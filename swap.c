#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @front: stack front
 * @num_popped: line_number
 * Return: no return
*/
void f_swap(stack_t **front, unsigned int num_popped)
{
	stack_t *h;
	int len = 0, aux;

	h = *front;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num_popped);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	h = *front;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
