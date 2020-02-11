#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	float pre1 = 1;
	float pre2 = 2;
	float new, i;

	printf("%.0f, %.0f", pre1, pre2);
	for (i = 0; i < 98; i++)
	{
		new = pre1 + pre2;
		pre1 = pre2;
		pre2 = new;
		printf(", %.0f", new);
	}
	printf("\n");
	return (0);
}
