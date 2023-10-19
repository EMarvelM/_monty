#include "monty.h"

/**
 * monty_nodequeue - Sets the stack to queue mode.
 * @front: Stack front (not used)
 * @numPop: Line number (not used)
 * Return: No return
 */
void monty_nodequeue(stack_t **front, unsigned int numPop)
{
	(void)front;
	(void)numPop;
	custom_struct.stack_queue_flag = 1;
}

/**
 * add_Queue - Adds a node to the tail of the stack (queue mode).
 * @n: New value
 * @front: Front of the stack
 * Return: No return
 */
void add_Queue(stack_t **front, int n)
{
	stack_t *_newNode, *_get_n;

	_get_n = *front;
	_newNode = malloc(sizeof(stack_t));

	if (_newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	_newNode->n = n;
	_newNode->next = NULL;

	if (_get_n)
	{
		while (_get_n->next)
		{
			_get_n = _get_n->next;
		}
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
