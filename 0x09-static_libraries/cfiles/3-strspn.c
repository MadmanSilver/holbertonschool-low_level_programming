#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: bytes to check for
 *
 * Return: number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
	}

	return (0);
}
