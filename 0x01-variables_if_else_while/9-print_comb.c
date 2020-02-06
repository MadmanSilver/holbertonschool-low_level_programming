#include <stdio.h>

/**
 * main - Prints combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c < '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
