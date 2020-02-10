#include "holberton.h"

/**
 * main - Prints "Holberton"
 *
 * Return: Always 0
 */
int main(void)
{
	char h[10] = "Holberton\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(h[i]);
	}

	return (0);
}
