#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog variable to initialize
 * @name: string with name of dog
 * @age: float with age of dog
 * @owner: string with name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
