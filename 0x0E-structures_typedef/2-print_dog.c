#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	char *n;
	float a;
	char *o;

	if (d == NULL)
		return;

	n = d->name;
	a = d->age;
	o = d->owner;

	if (n == NULL)
		n = "(nil)";

	if (o == NULL)
		o = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", n, a, o);
}
