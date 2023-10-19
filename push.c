#include "monty.h"
/**
 * f_push - add node to the stack
 * @front: stack front
 * @numPop: line_number
 * Return: no return
*/
void f_push(stack_t **front, unsigned int numPop)
{
	int k = 0, n, s_q_flag = 0;

	if (custom_struct.argument)
	{
		if (custom_struct.argument[0] == '-')
			k++;
		for (; custom_struct.argument[k] != '\0'; k++)
		{
			if (custom_struct.argument[k] > 57 || custom_struct.argument[k] < 48)
				s_q_flag = 1; }
		if (s_q_flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", numPop);
			fclose(custom_struct.file_ptr);
			free(custom_struct.line_cont);
			free_stack(*front);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", numPop);
		fclose(custom_struct.file_ptr);
		free(custom_struct.line_cont);
		free_stack(*front);
		exit(EXIT_FAILURE); }
	n = atoi(custom_struct.argument);
	if (custom_struct.stack_queue_flag == 0)
		addnode(front, n);
	else
		addqueue(front, n);
}
