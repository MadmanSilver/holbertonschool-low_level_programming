#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to get sign of
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
