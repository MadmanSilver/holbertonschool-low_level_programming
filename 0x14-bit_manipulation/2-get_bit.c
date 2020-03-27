#include "holberton.h"

/**
 * get_bit - finds the value of a bit at a given index
 * @n: number to search
 * @index: bit to find
 *
 * Return: result, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
