#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to search through
 * @size: size of array
 * @cmp: function to compare values
 *
 * Return: index of the first occurance of the int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
