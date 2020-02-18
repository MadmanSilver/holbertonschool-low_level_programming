#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, c = sizeof(str) / 2 + 1;

	if (sizeof(str) % 2 != 0)
		c = (sizeof(str) - 1) / 2;

	for (i = c; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
