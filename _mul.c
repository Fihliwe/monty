#include "monty.h"
/**
 * _mul -  multiplies the second top element of the stack
 * @head: start of the stack
 * @line_number: error message
 * Return: nothing
 */

void _mul(stack_t **head, unsigned int line_number)
{
	stack_t *x;
	int length = 0; 
	int aux;

	x = *head;
	while (x)
	{
		x = x->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	aux = x->next->n * x->n;
	x->next->n = aux;
	*head = x->next;
	free(x);
}
