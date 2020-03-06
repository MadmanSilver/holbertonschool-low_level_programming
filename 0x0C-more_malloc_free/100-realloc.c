#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory block
 * @old_size: size of ptr
 * @new_size: size to reallocate to
 *
 * Return: pointer to new allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)p + i) = *((char *)ptr + i);
	}

	free(ptr);
	return (p);
}
