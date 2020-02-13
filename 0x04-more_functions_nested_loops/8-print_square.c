#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: Size of the square to be printed
 */
void print_square(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
