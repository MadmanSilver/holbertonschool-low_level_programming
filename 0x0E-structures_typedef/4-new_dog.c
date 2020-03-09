#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int nc = 0;
	int oc = 0;
	char *n;
	char *o;
	dog_t *d;

	while (name[nc])
		nc++;
	while (owner[oc])
		oc++;

	n = malloc(sizeof(char) * (nc + 1));
	o = malloc(sizeof(char) * (oc + 1));

	for (i = 0; i < nc; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; i < oc; i++)
		o[i] = owner[i];
	o[i] = '\0';

	d = malloc(sizeof(struct dog));
	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
