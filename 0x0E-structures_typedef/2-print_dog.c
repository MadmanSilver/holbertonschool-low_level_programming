#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	char *n = d->name;
	float a = d->age;
	char *o = d->owner;

	if (d == NULL)
		return;

	if (o == NULL)
		o = "(nil)";

	if (o == NULL)
		o = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", n, a, o);
}
