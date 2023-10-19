#include "monty.h"

/**
 * monty_nodestack - Sets the stack to stack mode.
 * @front: Stack front (not used)
 * @numPop: Line number (not used)
 * Return: No return
 */
void monty_nodestack(stack_t **front, unsigned int numPop)
{
	(void)front;
	(void)numPop;
	custom_struct.stack_queue_flag = 0;
}
