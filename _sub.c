#include "monty.h"
/**
 * _sub - subtracts the top element of the stack
 * @head: start of stack
 * @line_number: error message
 * Return; nothing
 */

void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
