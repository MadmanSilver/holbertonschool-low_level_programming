#include "holberton.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
