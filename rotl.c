#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@front: stack front
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **front,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *front, *aux;

	if (*front == NULL || (*front)->next == NULL)
	{
		return;
	}
	aux = (*front)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *front;
	(*front)->next = NULL;
	(*front)->prev = tmp;
	(*front) = aux;
}
