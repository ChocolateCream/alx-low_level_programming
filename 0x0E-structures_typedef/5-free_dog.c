#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory
 * @d: A pointer to a dog
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
