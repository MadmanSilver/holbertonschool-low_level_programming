#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: num of args
 * @...: list of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		printf("%d", va_arg(args, int));
		for (i = 1; i < n; i++)
		{
			if (separator == NULL)
				printf("%d", va_arg(args, int));
			else
				printf("%s%d", separator, va_arg(args, int));
		}
		printf("\n");
	}

	va_end(args);
}
