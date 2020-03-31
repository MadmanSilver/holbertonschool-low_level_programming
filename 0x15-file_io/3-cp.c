#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * main - copies content from one file to another
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 unless error
 */
int main(int argc, char **argv)
{
	int file_to, file_from, len;
	char *buff = malloc(sizeof(char *) * 1024);

	if (argc != 3)
		fail('u', -1, -1);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		fail('r', file_to, file_from, argv[1]);
	len = read(file_from, buff, 1024);
	if (len == -1)
		fail('r', file_to, file_from, argv[1]);
	if (file_to == -1 || write(file_to, buff, len) == -1)
		fail('w', file_to, file_from, argv[2]);
	while (len == 1024)
	{
		len = read(file_from, buff, 1024);
		write(file_to, buff, len);
	}
	if (close(file_to) == -1)
		fail('c', file_to, file_from, file_to);
	if (close(file_from) == -1)
		fail('r', file_to, file_from, file_from);
	return (0);
}

/**
 * fail - handles errors
 * @c: reason for error
 * @f1: first file to close
 * @f2: second file to close
 */
void fail(char c, int f1, int f2, ...)
{
	va_list args;

	va_start(args, f2);
	close(f1);
	close(f2);

	if (c == 'c')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(args, int));
		va_end(args);
		exit(100);
	}
	else if (c == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", va_arg(args, char *));
		va_end(args);
		exit(99);
	}
	else if (c == 'r')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			va_arg(args, char *));
		va_end(args);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		va_end(args);
		exit(97);
	}
}
