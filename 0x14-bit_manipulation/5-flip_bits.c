#include "holberton.h"

/**
 * flip_bits - returns number of bits needed to flip to get to another number
 * @n: number to check
 * @m: number to check against
 *
 * Return: result
 */
int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0, digits = sizeof(unsigned long int) * 8;
	unsigned long int tmpn, tmpm;

	for (i = 0; i < digits; i++)
	{
		tmpn = n << (digits - 1) >> (digits - 1);
		tmpm = m << (digits - 1) >> (digits - 1);

		if (tmpn != tmpm)
			count++;

		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
