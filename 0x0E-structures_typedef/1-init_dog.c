#include "dog.h"

/**
 * init_dog - initializes the name, age and owner of the struct dog
 * @d: The name for the struct dog
 * @name: A string for the dog's name
 * @age: A float for the dog's age
 * @owner: A string for the dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
