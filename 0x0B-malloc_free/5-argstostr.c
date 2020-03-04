#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concats all args
 * @ac: num of args
 * @av: args
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
	}

	s = malloc(sizeof(char) * (count + ac + 1));

	if (s == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';

	return (s);
}
