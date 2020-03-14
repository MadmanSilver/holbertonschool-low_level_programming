#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of args
 * @...: args to print
 */
void print_all(const char * const format, ...)
{
	int i = 0, count = 0, first = 1;
	char *s;
	va_list args;

	while (format != NULL && format[count] != '\0')
		count++;
	va_start(args, format);
	while (i < count)
	{
		if (!(first) && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				first = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				first = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				first = 0;
				break;
			case 's':
				s = va_arg(args, char *);
				first = 0;
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
