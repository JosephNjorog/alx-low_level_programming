#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory for dogs
 * @d: pointer to dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name), free(d->owner), free(d);
	}
}
