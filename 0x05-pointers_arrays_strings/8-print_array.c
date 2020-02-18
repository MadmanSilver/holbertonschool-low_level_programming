#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements from an array
 * @a: array to print from
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0)
		printf("%d\n", a[n - 1]);
	else
		printf("\n");
}
