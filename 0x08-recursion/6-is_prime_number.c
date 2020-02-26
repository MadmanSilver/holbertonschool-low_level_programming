#include "holberton.h"

/**
 * is_prime_number - determines if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (test(n, 2));
}

/**
 * test - tests if n is prime
 * @n: number to test
 * @x: number to test against
 *
 * Return: 1 if prime, 0 otherwise
 */
int test(int n, int x)
{
	if (n / x * x == n)
		return (0);
	if (x > n / 2)
		return (1);
	return (test(n, x + 1));
}
