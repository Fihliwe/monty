#include "monty.h"

/**
 * _pint - prints the value at the top of the stack.
 * @head: start of stack.
 * @line_number: if stack is empty.
 * Return: nothing.
 */

void _pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprint(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
