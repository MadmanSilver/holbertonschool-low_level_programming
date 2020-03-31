#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to write to file
 *
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		close(file);
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (write(file, text_content, len) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
