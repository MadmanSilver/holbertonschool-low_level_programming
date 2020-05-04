#include "holberton.h"

/**
 * _puts - Prints a given string followed by a new line to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
