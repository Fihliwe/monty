#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 * @head: start of the stack.
 * @line_number:  print the error message.
 * Return: nothing
 */

void _pop(stack_t **head, unsigned int line_number)
{
	stack_t *x;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(monty.arg);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	x = *head;
	*head = x->next;
	free(x);
}		
