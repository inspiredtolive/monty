#include "monty.h"

/**
 * stack_push - adds an element to the top of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 */
void stack_push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void)line_number;
	if (mem.n == NULL)
	{
		free_all(*stack);
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		free_all(*stack);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = atoi(mem.n);
	node->prev = NULL;
	node->next = *stack;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
