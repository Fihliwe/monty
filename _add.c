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
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(monty.file_s);
		free(monty.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	aux = x->n + x->next->n;
	x->next->n = aux;
	*head = x->next;
	free(x);
}
/**
 * add_node - add node to the head stack
 * @head: start of stack
 * @n: value
 * Return: nothing
*/

void add_node(stack_t **head, int n)
{

	stack_t *new_n, *aux;

	aux = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{ 
		printf("Error\n");
		exit(0);
	}
	if (aux)
	{
		aux->prev = new_n;
		new_n->n = n;
		new_n->next = *head;
		new_n->prev = NULL;
		*head = new_n;
	}
}
