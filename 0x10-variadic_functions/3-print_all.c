#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of args
 * @...: args to print
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0, sub = 0;
	char *s;
	va_list args;

	while (format[count] != '\0')
	{
		count++;
		if (format[count] != 'c' && format[count] != 'i' &&
			format[count] != 'f' && format[count] != 's')
			sub++;
	}
	va_start(args, format);
	while (i < count)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
