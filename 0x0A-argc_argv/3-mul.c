#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
