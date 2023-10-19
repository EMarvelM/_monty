#include "monty.h"
/**
* exec - executes the opcode
* @stack: front linked list - stack
* @numPop: line_counter
* @file_ptr: poiner to monty file_ptr
* @line_cont: line line_cont
* Return: no return
*/
int exec(char *line_cont, stack_t **stack, unsigned int numPop, FILE *file_ptr)
{
	instruction_t opst[] = {
				{"push", monty_nodepush}, {"pall", monty_nodepall}, {"pint", monty_nodepint},
				{"pop", monty_nodepop},
				{"swap", monty_nodeswap},
				{"add", monty_nodeadd},
				{"nop", monty_nodenop},
				{"sub", monty_nodesub},
				{"div", monty_nodediv},
				{"mul", monty_nodemul},
				{"mod", monty_nodemod},
				{"pchar", monty_nodepchar},
				{"pstr", monty_nodepstr},
				{"rotl", monty_noderotl},
				{"rotr", monty_noderotr},
				{"queue", monty_nodequeue},
				{"stack", monty_nodestack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(line_cont, " \n\t");
	if (op && op[0] == '#')
		return (0);
	custom_struct.argument = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, numPop);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", numPop, op);
		fclose(file_ptr);
		free(line_cont);
		freeStacks(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
