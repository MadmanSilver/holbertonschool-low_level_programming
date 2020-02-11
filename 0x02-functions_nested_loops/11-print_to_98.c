#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i > 97; i--)
	{
		if (i != n)
			printf(", ");
		printf("%d", i);
	} 
	for (i = n; i < 99; i++)
	{
		if (i != n)
			printf(", ");
		printf("%d", i);
	}
	printf("\n");
}
