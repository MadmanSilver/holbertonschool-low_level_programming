#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, k;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
