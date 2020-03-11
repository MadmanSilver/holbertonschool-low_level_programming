#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - calculates a simple math operation
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if no error,
 *	98 if incorrect usage,
 *	99 invalid operator,
 *	100 if divide by 0
 */
int main(int argc, char **argv)
{
	int (*op)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (op == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((!(strcmp(argv[2], "%")) || !(strcmp(argv[2], "/")))
		&& atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
