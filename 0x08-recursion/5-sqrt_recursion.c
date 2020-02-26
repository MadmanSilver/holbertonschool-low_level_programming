#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: number to calculate
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (test(n, 1));
}

/**
 * test - tests if x is the sqrt of n
 * @n: number to sqrt
 * @x: number to test
 *
 * Return: sqrt of n
 */
int test(int n, int x)
{
	if (n / x == x && (n / x) * (n / x) == n)
		return (x);
	if (x > n / 2)
		return (-1);
	return (test(n, x + 1));
}
