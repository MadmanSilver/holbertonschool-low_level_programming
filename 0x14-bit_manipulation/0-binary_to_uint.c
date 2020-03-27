#include "holberton.h"
#include <math.h>

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: binary to convert
 *
 * Return: result, 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, result = 0, place = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += ((b[len - i - 1] - '0') * place);
		place *= 2;
	}

	return (result);
}
