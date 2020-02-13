#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle (in lines)
 */
void print_triangle(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			if (size - x <= y)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
