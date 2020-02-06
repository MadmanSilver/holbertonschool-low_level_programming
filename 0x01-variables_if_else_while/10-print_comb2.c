#include <stdio.h>

/**
 * main - Prints 00 through 99
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
			putchar(c);
			putchar(c2);
			if (c + c2 != '9' + '9')
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c++;
		c2 = '0';
	}
	putchar('\n');
	return (0);
}
