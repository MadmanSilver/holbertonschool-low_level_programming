#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: start of range (inclusive)
 * @max: end of range (inclusive)
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;

	return (p);
}
