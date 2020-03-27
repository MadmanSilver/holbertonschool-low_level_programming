#include "holberton.h"
#include <limits.h>
#include <stdio.h>

/**
 * print_binary - prints a number in binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0, digits = sizeof(unsigned long int) * 8;
	unsigned long place = ULONG_MAX - ((ULONG_MAX << 1) >> 1);

	if (n == 0)
		_putchar('0');

	for (i = 0; i < digits; i++)
	{
		if (((n & place) >> (digits - 1)))
			flag = 1;
		if (flag)
			_putchar(((n & place) >> (digits - 1)) + '0');
		n = n << 1;
	}
}
