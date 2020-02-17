#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
