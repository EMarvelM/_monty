#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@front: stack front
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **front, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *front;
	if (*front == NULL || (*front)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *front;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*front)->prev = copy;
	(*front) = copy;
}
