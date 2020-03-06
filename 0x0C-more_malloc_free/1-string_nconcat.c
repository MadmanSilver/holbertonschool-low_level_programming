#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concat
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1, l2;
	char *s = "";
	char *p;

	if (s1 == NULL)
		s1 = s;
	if (s2 == NULL)
		s2 = s;

	for (l1 = 0; s1[l1]; l1++)
		;
	for (l2 = 0; s2[l2]; l2++)
		;

	if (n >= l2)
		n = l2;

	p = malloc(sizeof(char) * (l1 + n + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1 + n; i++)
	{
		if (i < l1)
			p[i] = s1[i];
		else
			p[i] = s2[i - l1];
	}

	p[i] = '\0';
	return (p);
}
