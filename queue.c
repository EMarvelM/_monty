#include "monty.h"
/**
 * f_queue - prints the top
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void f_queue(stack_t **front, unsigned int numPop)
{
	(void)front;
	(void)numPop;
	custom_struct.stack_queue_flag = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @front: front of the stack
 * Return: no return
*/
void addqueue(stack_t **front, int n)
{
	stack_t *_newNode, *_get_n;

	_get_n = *front;
	_newNode = malloc(sizeof(stack_t));
	if (_newNode == NULL)
	{
		printf("Error\n");
	}
	_newNode->n = n;
	_newNode->next = NULL;
	if (_get_n)
	{
		while (_get_n->next)
			_get_n = _get_n->next;
	}
	if (!_get_n)
	{
		*front = _newNode;
		_newNode->prev = NULL;
	}
	else
	{
		_get_n->next = _newNode;
		_newNode->prev = _get_n;
	}
}
