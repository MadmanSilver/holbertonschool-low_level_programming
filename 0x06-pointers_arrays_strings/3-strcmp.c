#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i, c1 = 0, c2 = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		c1 += s1[i];
		c2 += s2[i];
	}

	return (c1 - c2);
}
