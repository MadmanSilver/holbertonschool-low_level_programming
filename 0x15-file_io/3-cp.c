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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	len = read(file_from, buff, 1024);
	if (file_to == -1 || write(file_to, buff, len) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (len == 1024)
	{
		len = read(file_from, buff, 1024);
		write(file_to, buff, len);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
