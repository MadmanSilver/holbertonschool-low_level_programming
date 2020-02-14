#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int b, j;

	if (n < 0)
	{
		_putchar('-');
		j = n * -1;
		b = j;
	}
	else
	{
		j = n;
		b = n;
	}

	if (n == 0)
		_putchar('0');

	while (j > 0)
	{
		j = j / 10;
		i++;
	}

	for (j = 0; j < i; j++)
	{
		k *= 10;
		k += b % 10;
		b /= 10;
	}

	for (j = 0; j < i; j++)
	{
		_putchar('0' + k % 10);
		k /= 10;
	}
}
