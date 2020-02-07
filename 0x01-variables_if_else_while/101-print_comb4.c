#include <stdio.h>

/**
 * main - Prints every unique combo of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int c = '0';
	int c2 = '0';
	int c3 = '0';

	while (c <= '9')
	{
		while (c2 <= '9')
		{
			while (c3 <= '9')
			{
				if (c != c2 && c != c3 && c2 != c3)
				{
					putchar(c);
					putchar(c2);
					putchar(c3);
					if (c + c2 + c3 != '7' + '8' + '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				c3++;
			}
			c2++;
			c3 = c2;
		}
		c++;
		c2 = c;
		c3 = c;
	}
	putchar('\n');
	return (0);
}
