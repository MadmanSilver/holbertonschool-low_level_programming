#include "holberton.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int val = 1;

	return (*((char *)(&val)));
}
