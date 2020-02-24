#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: substring to search for
 *
 * Return: pointer to beginning of substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					if (needle[j + 1] == '\0')
						return (haystack + i);
				}
				else
				{
					break;
				}
			}
		}
	}

	return (NULL);
}
