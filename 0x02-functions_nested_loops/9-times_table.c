#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int n, n2;
	int r;

	for (n = 0; n < 10; n++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			r = n * n2;
			if (n2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + r / 10);
				}
			}
			_putchar('0' + r % 10);
		}
		_putchar('\n');
	}
}
