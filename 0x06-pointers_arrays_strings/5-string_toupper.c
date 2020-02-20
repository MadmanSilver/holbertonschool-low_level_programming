#include "holberton.h"

/**
 * string_toupper - changes all characters to uppercase
 * @s: string to change
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 123 && s[i] > 96)
			s[i] = s[i] - 32;
	}

	return s;
}
