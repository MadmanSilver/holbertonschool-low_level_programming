#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, h, c = 0;

	while (str[c] != '\0')
		c++;

	if (c % 2 != 0)
		h = (c - 1) / 2;
	else
		h = c / 2;

	for (i = h; i > 0; i--)
	{
		_putchar(str[c - i]);
	}

	_putchar('\n');
}
