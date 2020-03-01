#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments passed, one per line
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
