#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to print between args
 * @n: num of args
 * @...: args to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";

		printf("%s", s);
		for (i = 1; i < n; i++)
		{
			s = va_arg(args, char *);

			if (s == NULL)
				s = "(nil)";

			if (separator == NULL)
				printf("%s", s);
			else
				printf("%s%s", separator, s);
		}
	}
	printf("\n");

	va_end(args);
}
