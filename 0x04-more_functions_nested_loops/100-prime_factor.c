#include "holberton.h"
#include <math.h>
#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n = 22440;
	unsigned long cFact;

	for (cFact = 2; cFact < sqrt(n); cFact++)
	{
		if (n % cFact == 0)
		{
			n = n / cFact;
			cFact = 1;
		}
	}

	printf("%lu\n", n);
	return (0);
}
