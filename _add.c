#include "monty.h"

/**
 * _add -  adds the top two elements of the stack.
 * @head: start of stack.
 * @line_number:  print the error message.
 * Return: nothing.
 */

void _add(stack_t **head, unsigned int line_number)
{
	stack_t *x;
	int lenght = 0;
	int plug;

	x = *head;
	while (x)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	x = *head;
	plug = x->n + x->next->n;
	*head = x->next;
	free(x);
}
