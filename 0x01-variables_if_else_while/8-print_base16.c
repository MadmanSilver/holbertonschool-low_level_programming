#include <stdio.h>

/**
 * main - Prints all digits of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
