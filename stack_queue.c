#include "monty.h"
/**
 * _stack -  sets the format of the data to a stack (LIFO)
 * @head: start of stack
 * @line_number: void
 * Return: nothing
*/
void _stack(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
	monty.lifi_s = 0;
}

/**
 * _queue -  sets the format of the data to a queue (FIFO).
 * @head: start of stack
 * @line_number: void
 * Return: nothing
*/

void _queue(stack_t **head, unsigned int line_number)
{
        (void)head;
        (void)line_number;
        monty.lifi_s = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: value
 * @head: start of the stack
 * Return: nothing
*/

void add_queue(stack_t **head, int n)
{
	stack_t *new_n, *aux;

	aux = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
	}
	new_n->n = n;
	new_n->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_n;
		new_n->prev = NULL;
	}
	else
	{
		aux->next = new_n;
		new_n->prev = aux;
	}
}
