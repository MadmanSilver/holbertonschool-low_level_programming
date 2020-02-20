#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int i, j;
	char c[8] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
		 s[i] == 'o' || s[i] == 'O' || s[i] == 't' || s[i] == 'T' || s[i] == 'l' ||
		 s[i] == 'L'; j++)
		{
			if (s[i] == c[j] || s[i] - 32 == c[j])
				s[i] = '0' + j;
		}
	}

	return (s);
}
