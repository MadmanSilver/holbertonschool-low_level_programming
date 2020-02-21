#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer to print
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
	char *start = b;

	for (i = 0; i < size; i += 10)
	{
		if (size - i < 10)
			k = size - i;
		else
			k = 10;
		printf("%08lx: ", &b[i] - start);
		for (j = 0; j < k; j++)
		{
			printf("%02x", b[i + j]);
			if (j % 2 == 1)
				putchar(' ');
		}

		for (; j < 10; j++)
		{
			printf("  ");
			if (j % 2 == 1)
				putchar (' ');
		}

		for (j = 0; j < k; j++)
		{
			if (b[i + j] > 31 && b[i + j] < 127)
				printf("%c", b[i + j]);
			else
				putchar('.');
		}
		putchar('\n');
	}
	if (size < 1)
		putchar('\n');
}
