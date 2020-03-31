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
	int file;
	char *s = malloc(sizeof(char) * letters);
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	rd = read(file, s, letters);

	if (rd == -1)
	{
		close(file);
		return (0);
	}

	wr = write(STDOUT_FILENO, s, rd);

	if (wr == -1)
	{
		close(file);
		return (0);
	}

	close(file);

	return (wr);
}
