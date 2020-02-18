#include "holberton.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i;
	unsigned num = 0;
	int sign = 1;
	int after = 0;
	int before = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && before)
		{
			sign *= -1;
		}
		else if (s[i] < 58 && s[i] > 47)
		{
			if (before && s[i] != '0')
			{
				num += s[i] - 48;
				before = 0;
			}
			else if (!after)
			{
				num *= 10;
				num += s[i] - 48;
			}
		}
		else if (!after && !before)
		{
			after = 1;
		}
	}

	if (num == 0)
		return (0);

	return (num * sign);
}
