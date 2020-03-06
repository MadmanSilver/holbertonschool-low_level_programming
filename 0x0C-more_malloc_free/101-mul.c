#include "holberton.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	char *p;
	char *s1;
	char *s2;

	if (argc != 3)
		error();

	if (!(check(argv[1])) || !(check(argv[2])))
		error();

	s1 = reduce(argv[1]);
	s2 = reduce(argv[2]);

	if (count(s1) > count(s2))
		p = inf_mul(s1, s2);
	else
		p = inf_mul(s2, s1);

	free(s1);
	s1 = p;
	p = reduce(p);
	free(s1);
	free(s2);
	_puts(p);
	free(p);
	return (0);
}

/**
 * reduce - removes leading zeros
 * @s: string to reduce
 *
 * Return: pointer to new string
 */
char *reduce(char *s)
{
	int i;
	int c = 0;
	char *p;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '0' && s[i + 1] != '\0')
		{
			c++;
		}
	}

	p = malloc(sizeof(char) * (i - c + 1));
	p[i - c] = '\0';

	for (i -= 1; i - c >= 0; i--)
	{
		p[i - c] = s[i];
	}

	return (p);
}

/**
 * error - prints "Error" and exits with code 98
 */
void error(void)
{
	_puts("Error");
	exit(98);
}

/**
 * check - checks if a string is only numbers
 * @s: string to check
 *
 * Return: 0 if not only numbers, 1 if only numbers
 */
int check(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * inf_mul - multiplies two numbers
 * @s1: first number
 * @s2: second number
 *
 * Return: pointer to new string with result
 */
char *inf_mul(char *s1, char *s2)
{
	int i, j;
	int c1 = count(s1);
	int c2 = count(s2);
	char *m;
	char *p;
	char *p2 = malloc(sizeof(char) * 2);

	if (p2 == NULL)
		error();

	p2[0] = '0';
	p2[1] = '\0';

	for (i = c1 - 1; i >= 0; i--)
	{
		p = malloc(sizeof(char) * 2);

		if (p == NULL)
		{
			if (m != NULL)
				free(m);
			free(p2);
			error();
		}

		p[0] = '0';
		p[1] = '\0';

		for (j = c2 - 1; j >= 0; j--)
		{
			m = place(cmul(s1[i], s2[j]), ((c2 - 1) - j) + ((c1 - 1) - i));
			p = inf_add(p, m);
		}

		p2 = inf_add(p2, p);
	}
	return (p2);
}

/**
 * cmul - multiplies two single digit numbers
 * @c1: first number
 * @c2: second number
 *
 * Return: pointer to new string with result
 */
char *cmul(char c1, char c2)
{
	int n = (c1 - 48) * (c2 - 48);
	char *p;

	if (n / 10 == 0)
	{
		p = malloc(sizeof(char) * 2);

		if (p == NULL)
			error();

		p[0] = n + '0';
		p[1] = '\0';
	}
	else
	{
		p = malloc(sizeof(char) * 3);

		if (p == NULL)
			error();

		p[0] = (n / 10) + '0';
		p[1] = (n % 10) + '0';
		p[2] = '\0';
	}

	return (p);
}

/**
 * place - adds zeros to the end of a number
 * @s: number to modify
 * @zeros: number of zeros to add
 *
 * Return: pointer to new string containing result
 */
char *place(char *s, int zeros)
{
	int i;
	int c = count(s);
	char *p = malloc(sizeof(char) * (c + zeros + 1));

	if (p == NULL)
	{
		free(s);
		error();
	}

	for (i = 0; i < c + zeros; i++)
	{
		if (i < c)
			p[i] = s[i];
		else
			p[i] = '0';
	}

	p[i] = '\0';
	free(s);
	return (p);
}

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int c1 = count(s1);
	int c2 = count(s2);

	if (c1 < c2)
		return (0);

	for (i = 0; i < c1 && i < c2; i++)
	{
		if (s1[i] != s2[i])
			return (0);
	}

	return (1);
}

/**
 * inf_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 *
 * Return: on success, pointer to result, otherwise 0
 */
char *inf_add(char *n1, char *n2)
{
	int i, j, add, dif, size_r;
	int c1 = count(n1), c2 = count(n2);
	char *r;

	if (c1 > c2)
		size_r = c1 + 2;
	else
		size_r = c2 + 2;
	j = size_r;
	r = checked_malloc(sizeof(char) * size_r, n1, n2);
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
	free(n1);
	free(n2);
	return (carryTheOne(r, j, size_r));
}

/**
 * checked_malloc - allocates and checks
 * @size: amount to allocate
 * @n1: pointer to free
 * @n2: pointer to free
 *
 * Return: pointer to allocated
 */
void *checked_malloc(int size, char *n1, char *n2)
{
	void *p = malloc(size);

	if (p == NULL)
	{
		free(n1);
		free(n2);
		error();
	}
	return (p);
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

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
