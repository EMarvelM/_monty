#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (custom_struct.argument)
	{
		if (custom_struct.argument[0] == '-')
			j++;
		for (; custom_struct.argument[j] != '\0'; j++)
		{
			if (custom_struct.argument[j] > 57 || custom_struct.argument[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(custom_struct.file_pointer);
			free(custom_struct.line_content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(custom_struct.file_pointer);
		free(custom_struct.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(custom_struct.argument);
	if (custom_struct.stack_queue_flag == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
