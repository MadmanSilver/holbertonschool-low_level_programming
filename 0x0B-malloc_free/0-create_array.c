#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: pointer to array or NULL if error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
