#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer to print
 */
void print_buffer(char *b, int size)
{
	int i, j;
	char *start = b;

	for (i = 0; i < size; i += 10)
	{
		printf("%ld: ", start - b);
		for (j = 0; j < 10; j++)
		{
			printf("%d", b[i + j]);
			if (j % 2 == 1)
				putchar(' ');
		}
		for (j = 0; j < 10; j++)
		{
			printf("%c", b[j]);
		}
		putchar('\n');
	}
}
