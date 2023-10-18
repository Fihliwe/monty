#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @head: start of the stack.
 * @line_number:  print the error message.
 * Return: nothing.
 */

void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *x;
	int length = 0;
	int plug;

	x = *head;

	while (x)
	{
		x = x->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
                fclose(monty.file_s);
                free(monty.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
	}

	x = *head;
	plug = x->n;
	x->n = x->next->n;
	x->next->n = plug;
}
