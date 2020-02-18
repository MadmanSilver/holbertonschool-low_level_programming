#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, c = 0;

	while (str[c] != '\0')
		c++;

	if (c % 2 != 0)
		c = (c - 1) / 2;
	else
		c = c / 2;

	for (i = 0; i < c; i++)
	{
		_putchar(str[i + c]);
	}

	_putchar('\n');
}
