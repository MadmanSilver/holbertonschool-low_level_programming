#include "holberton.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0, 98 if error
 */
int main(int argc, char **argv)
{
	int c1, c2;
	int *num1;
	int *num2;
	int *res;
	int *tot;

	if (argc != 3)
		error();

	c1 = count(argv[1]);
	c2 = count(argv[2]);
	num1 = malloc(sizeof(int) * c1);
	num2 = malloc(sizeof(int) * c2);

	if (c1 > c2)
	{
		res = malloc(sizeof(int) * (c1 * 2));
		tot = malloc(sizeof(int) * (c1 * 2));
	}
	else
	{
		res = malloc(sizeof(int) * (c2 * 2));
		tot = malloc(sizeof(int) * (c2 * 2));
	}

	num1 = atoia(argv[1], num1);
	num2 = atoia(argv[2], num2);
	res = atoia("0", res);
	tot = atoia("0", tot);

	
}
