#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - creates a new spot in memory containeing a copy of a given string
 * @str: string to copy
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	len++;

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}

	p[i] = '\0';

	return (p);
}
