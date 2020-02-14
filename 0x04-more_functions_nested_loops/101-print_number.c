#include "holberton.h"
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int digits = 0, i;
	unsigned int pos = n, tmp = 0, rev = 0;

	if (n < 0)
	{
		_putchar('-');
		pos = -n;
	}
	tmp = pos;
	if (n == 0)
		_putchar('0');
	while (pos > 0)
	{
		pos = pos / 10;
		digits++;
	}
	pos = tmp;
	tmp = 0;
	if (pos % 10 > 3 && digits == 10)
	{
		tmp = pos % 10;
		pos -= pos % 10;
	}
	for (i = 0; i < digits; i++)
	{
		rev *= 10;
		rev += pos % 10;
		pos /= 10;
	}
	for (i = 0; i < digits; i++)
	{
		if (i == digits - 1)
			rev += tmp;
		_putchar('0' + rev % 10);
		rev /= 10;
	}
}
