#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of args passed to it
 * @argc: number of args
 * @argv: array of args
 *
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
