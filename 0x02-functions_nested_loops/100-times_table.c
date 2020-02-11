#include "holberton.h"

/**
 * print_times_table - Prints a times table of size n
 * @n: Size of the times table
 */
void print_times_table(int n)
{
	int c, r;

	if (n > -1 && n < 16)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				int f = c * r / 100;
				int s = c * r / 10 % 10;
				int t = c * r % 10;

				_putchar(',');
				_putchar(' ');
				if (c * r / 100 > 0)
				{
					_putchar('0' + f);
					_putchar('0' + s);
				}
				else if (c * r / 10 % 10 > 0)
				{
					_putchar(' ');
					_putchar('0' + s);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + t);
			}
			_putchar('\n');
		}
	}
}
