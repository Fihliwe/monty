#include "monty.h"
/**
 * _rotr -  rotates the stack to the bottom.
 * @head: start of the stack.
 * @line_number: not used.
 * Return: nothing
 */

void _rotr(stack_t **head, __attribute__((unused))unsigned int line_number)
{
	stack_t *replica;

	replica = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (replica->next)
	{
		replica = replica->next;
	}
	replica->next = *head;
	replica->prev->next = NULL;
	replica->prev = NULL;
	(*head)->prev = replica;
	(*head) = replica;
}
