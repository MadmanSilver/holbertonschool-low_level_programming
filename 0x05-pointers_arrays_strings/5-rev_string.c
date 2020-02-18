#include "holberton.h"

/**
 * rev_string - Reverses a given string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int i, c = sizeof(s);
	char str[sizeof(s) + 1];

	for (i = 0; i <= c; i++)
		str[i] = s[i];

	for (i = 0; i <= c; i++)
		s[i] = str[c - i];
}
