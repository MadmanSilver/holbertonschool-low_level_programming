#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index of found element, -1 if none
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
