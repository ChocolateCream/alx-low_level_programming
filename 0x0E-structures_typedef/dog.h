#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates a dog object
 * @name: a string for the dog's name
 * @age: a float for dog's age
 * @owner: a string for the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
