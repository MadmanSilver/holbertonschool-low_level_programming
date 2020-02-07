#include <stdio.h>

/**
 * main - Prints 00 00 through 99 99 with no dupes
 *
 * Return: Always 0
 */
int main(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	int minc;

	for (c1 = '0'; c1 <= '9'; c1++)
	{
		for (c2 = '0'; c2 <= '9'; c2++)
		{
			for (c3 = c1; c3 <= '9'; c3++)
			{
				if (c3 <= c1)
					minc = c2;
				else
					minc = '0';
				for (c4 = minc; c4 <= '9'; c4++)
				{
					if ((c1 < c3) || ((c2 < c4) && (c1 == c3)))
					{
						putchar(c1);
						putchar(c2);
						putchar(' ');
						putchar(c3);
						putchar(c4);
					}
					if ((c1 != '9') || (c2 != '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
