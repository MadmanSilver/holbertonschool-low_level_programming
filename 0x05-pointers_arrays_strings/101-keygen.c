#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - randomly generates a valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int num, total;

	srand(time(0));

	while (total < 2772)
	{
		num = (rand() % (126 - 33 + 1)) + 33;
		if (total + num <= 2772 && total + num + 33 <= 2772)
		{
			putchar(num);
			total += num;
		}
		if (2772 - total <= 126 && 2772 - total >= 33)
		{
			putchar(2772 - total);
			total += (2772 - total);
		}
	}

	return (0);
}
