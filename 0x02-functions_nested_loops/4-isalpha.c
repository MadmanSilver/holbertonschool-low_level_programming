#include "holberton.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: Character to check
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		if (c < 91 || c > 97)
		{
			return (1);
		}
	}
	return (0);
}
