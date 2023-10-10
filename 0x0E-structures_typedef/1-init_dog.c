#include "dog.h"
#include <stdio.h>
/**
 * init_dog - the main function.
 * @d: pointer to dog.
 * @name: name of dog.
 * @age: age of the dog.
 * @owner: owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
