#include <stdio.h>

/**
 * main - Prints the sub of the even valued Fibonacci numbers under 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int pre1 = 1;
	long int pre2 = 2;
	long int new = 0;
	long int sum = 2;

	while (new < 4000000)
	{
		if (new % 2 == 0)
			sum += new;
		new = pre1 + pre2;
		pre1 = pre2;
		pre2 = new;
	}
	printf("%ld\n", sum);
	return (0);
}
