#include "monty.h"
/**
 * add_Node - add node to the front stack
 * @front: front of the stack
 * @n: new_value
 * Return: no return
*/
void add_Node(stack_t **front, int n)
{

	stack_t *_newNode, *_get_n;

	_get_n = *front;
	_newNode = malloc(sizeof(stack_t));
	if (_newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (_get_n)
		_get_n->prev = _newNode;
	_newNode->n = n;
	_newNode->next = *front;
	_newNode->prev = NULL;
	*front = _newNode;
}
