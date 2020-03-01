#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num;
	int count = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (!(num - 25 < 0))
			num -= 25;
		else if (!(num - 10 < 0))
			num -= 10;
		else if (!(num - 5 < 0))
			num -= 5;
		else if (!(num - 2 < 0))
			num -= 2;
		else
			num -= 1;
		count++;
	}

	printf("%d\n", count);
	return (0);
}
