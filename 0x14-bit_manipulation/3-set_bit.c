#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to number to modify
 * @index: location of bit to change
 *
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, place = 1, bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (-1);

	if ((*n >> index) & 1)
		return (1);

	for (i = 1; i <= index; i++)
		place *= 2;

	*n += place;
	return (1);
}
