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
	int i, add, dif;
	int j = size_r;
	int c1 = count(n1), c2 = count(n2);

	if (c1 >= size_r || c2 >= size_r)
		return (0);
	for (i = 0; i < j; i++)
	{
		if (c1 > c2)
		{
			j = c1;
			dif = c1 - c2;
			if (i < dif)
				add = n1[i] - '0';
			else
				add = (n1[i] - '0') + (n2[i - dif] - '0');
		}
		else if (c2 > c1)
		{
			j = c2;
			dif = c2 - c1;
			if (i < dif)
				add = n2[i] - '0';
			else
				add = (n2[i] - '0') + (n1[i - dif] - '0');
		}
		else
		{
			j = c1;
			add = (n1[i] - '0') + (n2[i] - '0');
		}
		r[i] = add + '0';
	}
	return (carryTheOne(r, j, size_r));
}

/**
 * shiftR - shifts all characters in a string to the right once
 * @s: string to shift
 * @c: length of s
 */
void shiftR(char *s, int c)
{
	int i;

	for (i = c; i > 0; i--)
	{
		s[i] = s[i - 1];
	}

	s[0] = '0';
}

/**
 * count - counts length of a string
 * @s: string to count
 *
 * Return: length of the string
 */
int count(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * carryTheOne - carries the one
 * @r: needs ones carried
 * @j: current length
 * @size_r: max size of r
 *
 * Return: pointer to r
 */
char *carryTheOne(char *r, int j, int size_r)
{
	int i, add;

	for (i = j - 1; i >= 0; i--)
	{
		add = r[i] - '0';
		if (add > 9)
		{
			if (i == 0)
			{
				shiftR(r, j);
				if (size_r <= j + 1)
					return (0);
				i++;
				j++;
			}
			r[i - 1] += 1;
			r[i] = (add % 10) + '0';
		}
	}

	r[j] = '\0';

	return (r);
}
