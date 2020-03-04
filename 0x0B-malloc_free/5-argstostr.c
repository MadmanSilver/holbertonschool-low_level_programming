#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of args
 * @av: array of args
 *
 * Return: pointer to new string, NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		count += j;
	}

	s = malloc(sizeof(char) * count);
	

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
