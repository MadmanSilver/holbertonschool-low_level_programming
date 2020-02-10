#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to get last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;
	_putchar('0' + d);
	return (d);
}
