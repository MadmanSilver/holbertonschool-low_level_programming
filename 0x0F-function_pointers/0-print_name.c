#include "function_pointers.h"

/**
 * print_name - prints a name via given function
 * @name: name to be printed
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
