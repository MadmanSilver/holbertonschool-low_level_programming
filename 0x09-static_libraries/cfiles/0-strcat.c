#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to concat to
 * @src: String to concat
 *
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, c = 0, c2 = 0, tot;

	while (dest[c] != '\0')
		c++;

	while (src[c2])
		c2++;

	tot = c + c2;

	for (i = c; i < tot; i++)
	{
		*(dest + i) = *(src + (i - c));
	}

	return (dest);
}
