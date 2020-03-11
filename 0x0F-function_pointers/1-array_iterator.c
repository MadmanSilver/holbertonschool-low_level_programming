#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a given function on every element of a given array
 * @array: array to iterate through
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
