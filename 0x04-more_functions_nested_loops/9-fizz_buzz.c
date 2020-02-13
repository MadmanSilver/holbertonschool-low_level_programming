#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints 1 to 100, muliples of 3 and 5 are replaced with Fizz and Buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");

		if (i % 5 == 0)
			printf("Buzz");

		if (i % 5 != 0 && i % 3 != 0)
			printf("%d", i);

		putchar(' ');
	}

	putchar('\n');
}
