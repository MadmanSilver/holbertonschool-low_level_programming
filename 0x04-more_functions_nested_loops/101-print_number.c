#include "holberton.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int digits = 0, i;
	unsigned int pos = 0;
	unsigned int tmp = 0;
	unsigned int rev = 0;

	if (n < 0)
	{
		_putchar('-');
		pos = -n;
	}
	else
		pos = n;

	tmp = pos;

	if (n == 0)
		_putchar('0');

	while (pos > 0)
	{
		pos = pos / 10;
		digits++;
	}

	pos = tmp;

	for (i = 0; i < digits; i++)
	{
		rev *= 10;
		rev += pos % 10;
		pos /= 10;
	}

	/*printf("Digits: %d, Pos: %u, Rev: %u\n", digits, pos, rev);*/

	for (i = 0; i < digits; i++)
	{
		_putchar('0' + rev % 10);
		rev /= 10;
	}
}
