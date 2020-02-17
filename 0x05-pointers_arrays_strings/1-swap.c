#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: address of first integer to swap
 * @b: address of second integer to swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
