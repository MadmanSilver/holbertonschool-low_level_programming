#include "holberton.h"

/**
 * append_text_to_file - adds text to end of file
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len])
		len++;

	if (write(file, text_content, len) == -1)
		return (-1);

	return (1);
}
