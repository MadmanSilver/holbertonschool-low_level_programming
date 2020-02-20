#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concat to
 * @src: string to concat
 * @n: bytes of src to concat
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0;

	while (dest[c] != '\0')
		c++;

	for (i = 0; i < n; i++)
	{
		if (src[i])
		{
			*(dest + (c + i)) = *(src + i);
		}
		else
		{
			*(dest + (c + i)) = '\0';
			break;
		}
	}

	return (dest);
}
