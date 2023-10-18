#include "monty.h"
/**
 * _pstr - prints the string starting at the top of the stack.
 * @head: start of stack
 * @line_number: error message
 * Return: nothing
 */

void _pstr(stack_t **head, unsigned int line_number)
{
	stack_t *x;
	(void)line_number;

	x = *head;
	while (x)
	{
		if (x->n > 127 || x->n <= 0)
		{
			break;
		}
		printf("%c", x->n);
		x = x->next;
	}
	printf("\n");
}
