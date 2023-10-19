#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@front: stack front
  *@numPop: line_number
  *Return: no return
 */
void f_rotl(stack_t **front,  __attribute__((unused)) unsigned int numPop)
{
	stack_t *temp = *front, *_get_n;

	if (*front == NULL || (*front)->next == NULL)
	{
		return;
	}
	_get_n = (*front)->next;
	_get_n->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *front;
	(*front)->next = NULL;
	(*front)->prev = temp;
	(*front) = _get_n;
}
