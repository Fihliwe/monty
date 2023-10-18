#include "monty.h"
/**
  * _nop -  doesn’t do anything. 
  * @head: stack head
  * @line_number: error message
  * Return: nothing
 */

void _nop(__attribute__((unused))stack_t **head, __attribute__((unused))unsigned int line_number)
{
	(void)line_number;
	(void)head;
}
