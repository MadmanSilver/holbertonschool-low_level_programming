#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer for result
 * @size_r: size of r
 *
 * Return: on success, pointer to r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, add;
	int max = size_r;
	int c1 = 0, c2 = 0;
	int dif1 = 0, dif2 = 0;

	while (n1[c1] != '\0')
		c1++;

	while (n2[c2] != '\0')
		c2++;

/*	if (c1 > size_r - 1 || c2 > size_r - 1)
		return (0);
*/
	if (c1 > c2)
	{
		i = c1;
		dif1 = c1 - c2;
	}
	else if (c2 > c1)
	{
		i = c2;
		dif2 = c2 - c1;
	}
	else
	{
		i = c1;
	}

	for (i = i - 1; i >= 0; i--, max--)
	{
		if (i - dif1 < 0)
		{
			r[i] = n1[i];
		}
		else if (i - dif2 < 0)
		{
			r[i] = n2[i];
		}
		else
		{
			add += (n1[i - dif2] - '0') + (n2[i - dif1] - '0');
			r[i] = add % 10;
		}

		if (add > 9)
		{
			if (max == 0)
				return (0);
			add = 1;
		}
		else
		{
			add = 0;
		}
	}

	return (r);
}
