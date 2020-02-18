#include "holberton.h"

/**
 * rev_string - Reverses a given string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int i, c = 0;
	char str[2048];

	while (s[c] != '\0')
		c++;

	for (i = 0; i < c; i++)
		str[i] = s[i];

	for (i = 0; i < c; i++)
		s[i] = str[c - 1 - i];
}
