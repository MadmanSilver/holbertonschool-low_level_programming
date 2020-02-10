#include "holberton.h"

/**
 * _abs - Computes the absolute value of an int
 * @n: the number to evaluate
 *
 * Return: The result
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
