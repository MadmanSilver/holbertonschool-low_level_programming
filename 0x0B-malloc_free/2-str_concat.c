#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL upon error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len, len2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len])
		len++;
	while (s2[len2])
		len2++;

	p = malloc(sizeof(char) * (len + len2));

	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		p[i + len] = s2[i];
	}

	p[i + len] = '\0';
	return (p);
}
