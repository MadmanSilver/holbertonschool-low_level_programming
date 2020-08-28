#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: pointer to array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index of found element, -1 if none
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = size / 2, lo = 0, hi = size, j;

	for (; lo < hi; i = (hi + lo) / 2)
	{
		if ((hi - lo) % 2 == 0)
			i--;
		printf("Searching in array: ");
		for (j = lo; j < hi - 1; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			lo = i + 1;
		else
			hi = i;
	}

	return (-1);
}
