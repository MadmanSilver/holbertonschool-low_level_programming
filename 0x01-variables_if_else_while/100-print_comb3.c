#include <stdio.h>

/**
 * main - Prints every unique combo of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int c = '0';
	int c2 = '0';

	while (c <= '9')
	{
		while (c2 <= '9')
		{
			if (c != c2)
			{
				putchar(c);
				putchar(c2);
				if (c + c2 != '8' + '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
		c2 = c;
	}
	putchar('\n');
	return (0);
}
