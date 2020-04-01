#include "holberton.h"
#include <elf.h>
#include <stdio.h>

/**
 * main - reads the header of an ELF
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0 unless error
 */
int main(int argc, char **argv)
{
	int fd, rd;
	char s[1024];

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Could not read ELF\n", 26);
		exit(98);
	}

	rd = read(fd, s, 1024);

	if (rd == -1)
	{
		write(STDERR_FILENO, "Error: Could not read ELF\n", 26);
		close(fd);
		exit(98);
	}

	if (s[EI_MAG0] == 0x7f && s[EI_MAG1] == 'E' &&
		s[EI_MAG2] == 'L' && s[EI_MAG3] == 'F')
	{
		printf("%s\n", s);
	}
	else
	{
		write(STDERR_FILENO, "Error: This is not and ELF\n", 27);
		close(fd);
		exit(98);
	}

	return (0);
}
