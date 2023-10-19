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
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
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
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
