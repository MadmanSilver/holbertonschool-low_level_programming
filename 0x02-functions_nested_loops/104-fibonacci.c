#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long pre1a = 0;
	unsigned long pre1b = 1;
	unsigned long pre2a = 0;
	unsigned long pre2b = 2;
	unsigned long new1, new2;
	int i;

	printf("%lu, %lu", pre1b, pre2b);
	for (i = 0; i < 96; i++)
	{
		new1 = pre1a + pre2a;
		new2 = pre1b + pre2b;
		if (new2 >= 1000000)
		{
			new1 += new2 / 1000000;
			new2 = new2 % 1000000;
		}
		pre1a = pre2a;
		pre1b = pre2b;
		pre2a = new1;
		pre2b = new2;
		printf(", ");
		if (new1 != 0)
		{
			printf("%lu%06lu", new1, new2);
		}
		else
		{
			printf("%lu", new2);
		}
	}
	printf("\n");
	return (0);
}
