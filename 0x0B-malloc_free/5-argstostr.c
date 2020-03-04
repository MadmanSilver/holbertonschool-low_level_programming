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
	int i;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	p = str_concat(av[0], "");

	p = str_concat(p, av[1]);

	for (i = 2; i < ac; i++)
	{
		p = str_concat(p, av[i]);
	}

	return (p);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL upon error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, len = 0, len2 = 0;
	char *p;
	char *p1 = "";
	char *p2 = "";

	if (s1 == NULL)
	{
		s1 = p1;
		len++;
	}
	if (s2 == NULL)
	{
		s2 = p2;
		len2++;
	}

	while (s1[len])
		len++;
	while (s2[len2])
		len2++;

	p = malloc(sizeof(char) * (len + len2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len && s1[0] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (i = 0; i < len2 && s2[0] != '\0'; i++)
	{
		p[i + len] = s2[i];
	}

	p[len + len2] = '\n';
	p[len + len2 + 1] = '\0';
	return (p);
}
