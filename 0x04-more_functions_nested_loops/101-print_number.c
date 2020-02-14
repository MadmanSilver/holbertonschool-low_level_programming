#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i = 0, j = n, k = 0;

	if (n < 0)
	{
		_putchar('-');
		j = n * -1;
		n = j;
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
		k += n % 10;
		n /= 10;
	}

	for (j = 0; j < i; j++)
	{
		_putchar('0' + k % 10);
		k /= 10;
	}
}
