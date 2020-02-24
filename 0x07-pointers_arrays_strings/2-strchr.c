#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to first occurance of c, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
