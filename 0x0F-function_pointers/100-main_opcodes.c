#include <stdio.h>
#include <stdlib.h>

/**
 * main - print's it's own op codes
 * @argc: num of args
 * @argv: array of args
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, size;
	unsigned int y, x = 255;
	int (*m)(int, char **) = &main;
	char *p = (char *)m;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		y = p[i] - 4294967040;
		if (p[i] > x)
			printf("%.2x", y);
		else
			printf("%.2x", p[i]);
		if (i != size - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
