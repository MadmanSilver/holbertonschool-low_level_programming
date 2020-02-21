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
	int j = size_r;
	int c1 = 0, c2 = 0;
	int dif1 = 0, dif2 = 0;

	while (n1[c1] != '\0')
		c1++;

	while (n2[c2] != '\0')
		c2++;

/*	if (c1 > size_r - 1 || c2 > size_r - 1)
		return (0);
*/

	for (i = 0; i < j; i++)
	{
		if (c1 > c2)
		{
			j = c1;
			dif1 = c1 - c2;
			if (i < dif1)
				r[i] = n1[i];
			else
				r[i] = '0' + ((n1[i] 
		}
		else if (c2 > c1)
		{
			j = c2;
			dif2 = c2 - c1;
			if (i < dif2)
				r[i] = n2[i];
		}
		else
		{
			j = c1;
		}
	}

	return (r);
}
