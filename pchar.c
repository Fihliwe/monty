#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack
 * @head: start of the stack
 * @line_number: error message
 * Return: Nothing
 */

void _pchar(stack_t **head, unsigned int line_number)
{
	stack_t *x;

	x = *head;
	if (!x)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (x->n > 127 || x->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", x->n);
}
