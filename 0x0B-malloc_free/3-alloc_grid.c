#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a new 2-dimensional array of integers
 * @width: size of second dimension
 * @height: size of first dimension
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[i]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
