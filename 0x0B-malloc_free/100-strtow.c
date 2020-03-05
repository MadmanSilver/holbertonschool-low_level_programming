#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into an array of words
 * @str: string to split
 *
 * Return: pointer to array
 */
char **strtow(char *str)
{
	int i, j, k = 0;
	int nw = 0;
	char **p;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			nw++;
	}

	if (nw == 0)
		return (NULL);

	p = malloc(sizeof(char *) * (nw + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nw; i++)
	{
		while (str[k] == ' ')
			k++;

		for (j = 0; str[k] != ' '; k++)
			j++;

		k -= j;

		p[i] = malloc(sizeof(char) * (j + 1));

		if (p[i] == NULL)
			return (NULL);

		for (j = 0; str[k] != ' '; j++, k++)
			p[i][j] = str[k];

		p[i][j] = '\0';
	}

	p[nw] = NULL;

	return (p);
}
