#include "holberton.h"

/**
 * read_textfile - prints a text file to stdout
 * @filename: file to read
 * @letters: num of characters
 *
 * Return: num of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *s = malloc(sizeof(char) * letters);
	ssize_t rd = read(file, s, letters);

	if (rd == -1)
		return (0);

	if (write(STDOUT_FILENO, s, letters) == -1)
		return (0);

	return (rd);
}
