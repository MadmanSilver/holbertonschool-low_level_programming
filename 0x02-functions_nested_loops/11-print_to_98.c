#include "holberton.h"

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		_putchar('9');
		_putchar('8');
	}
	for (i = n; i < 99; i++)
	{
		if (i / 10 == 0)
		{
			if (i < 0)
				_putchar('0' + i * -1);
			else
				_putchar('0' + i);
		}
		else
		{
                        if (i < 0)
			{
				_putchar('0' + i * -1 / 10);
				_putchar('0' + i * -1 % 10);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
