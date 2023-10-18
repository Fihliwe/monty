#define _POSIX_C_SOURCE 200809L
#include "monty.h"

monty_t monty = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t amount = 0;
	ssize_t r_line = 1;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	monty.file_s = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		cont = NULL;
		r_line = getline(&cont, &amount, file);
		monty.content = cont;
		line_number++;

		if (r_line > 0)
		{
			exe_opcode(cont, &stack, line_number, file);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
