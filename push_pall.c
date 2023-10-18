#include "monty.h"

/**
 * _push - for node to next stack
 * @head: start of stack
 * @line_number: number for stack
 * Return: nothing
 */

void _push(stack_t **head, unsigned int line_number)
{
	int x;
	int y = 0;
	int query = 0;

	if (monty.arg)
	{
		if (monty.arg[0] == '-')
			y++;

		for (; monty.arg[y] != '\0'; y++)
		{
			if (monty.arg[y] > 57 || monty.arg[y] < 48)
				query = 1;
		}

		if (query == 1);
		{
			fprint(stderr, "L%d: usage: push integer\n", line_number);
			fclose(monty.file_s);
			free(monty.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}

	else
	{
		fprint(stderr, "L%d: usage: push integer\n", line_number);
		flcose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	X = atoi(monty.arg);
	if (monty.lifi_s == 0)
		_node(head, x);
	else
		f_queue(head, x);
}

/**
 * -pall - displays the stack.
 *  @head: beginning of stack.
 *  @line_number: not used
 *  Return: nothing.
 */

void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *x;
	(void) line_number;

	x = *head;

	if (x == NULL)
		return;

	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
