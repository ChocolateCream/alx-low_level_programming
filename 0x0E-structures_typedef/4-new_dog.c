#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: A string for the dog's name
 * @age: A float for the dog's age
 * @owner: A string for the dog's owner
 *
 * Return: dog_t which is a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = name;
    dog->age = age;
    dog->owner = owner;

    return (dog);
}
