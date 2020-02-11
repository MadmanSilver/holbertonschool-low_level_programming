#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int pre1 = 1;
	long int pre2 = 2;
	long int new, i;

	printf("%ld, %ld", pre1, pre2);
	for (i = 0; i < 48; i++)
	{
		new = pre1 + pre2;
		pre1 = pre2;
		pre2 = new;
		printf(", %ld", new);
	}
	printf("\n");
	return (0);
}
