#include "holberton.h"

/**
 * _islower - Checks if a character is lowercase or not
 * @c: The character to check
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c < 123)
	{
		return (c / 97);
	}
	else
	{
		return (0);
	}
}
