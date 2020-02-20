#include "holberton.h"

/**
 * cap_string - capitalize every word in a string
 * @s: string to process
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 123 && s[i] > 96)
		{
			if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!'
				 || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
				 s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' '
				 || s[i - 1] == '\t' || s[i - 1] == '\n')
			{
				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
