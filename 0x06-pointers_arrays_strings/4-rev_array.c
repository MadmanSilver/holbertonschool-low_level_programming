#include "holberton.h"

/**
 * reverse_array
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int arr[2048];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = arr[n - 1 - i];
	}
}
