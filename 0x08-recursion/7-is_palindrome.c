#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = length(s, 0);

	return (check(s, 0, len - 1));
}

/**
 * length - calculates the length of a string
 * @s: string to process
 * @n: index to start at
 *
 * Return: length of s
 */
int length(char *s, int n)
{
	if (*(s + n) != '\0')
		return (length(s, n + 1));
	return (n);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to check
 * @x: start of the string
 * @y: end of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check(char *s, int x, int y)
{
	if (*(s + x) != *(s + y))
		return (0);
	if (x >= y)
		return (1);
	return (check(s, x + 1, y - 1));
}
