#include "monty.h"
/**
  *f_sub- sustration
  *@front: stack front
  *@numPop: line_number
  *Return: no return
 */
void f_sub(stack_t **front, unsigned int numPop)
{
	stack_t *_get_n;
	int subst, monty_nodes;

	_get_n = *front;
	for (monty_nodes = 0; _get_n != NULL; monty_nodes++)
		_get_n = _get_n->next;
	if (monty_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		free_stack(*front);
		exit(EXIT_FAILURE);
	}
	_get_n = *front;
	subst = _get_n->next->n - _get_n->n;
	_get_n->next->n = subst;
	*front = _get_n->next;
	free(_get_n);
}
