#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int i;
	int con;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (; (s[i] < 123 && s[i] > 96) || (s[i] < 91 && s[i] > 64); i++)
		{
			con = s[i] + 13;
			if ((con > 90 && s[i] < 91) || (con > 122 && s[i] > 96))
				con -= 26;
			s[i] = con;
		}
	}

	return (s);
}
