#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @front: stack front
 * @num_popped: line_number
 * Return: no return
*/
void f_mod(stack_t **front, unsigned int num_popped)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", num_popped);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	h = *front;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num_popped);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*front = h->next;
	free(h);
}
