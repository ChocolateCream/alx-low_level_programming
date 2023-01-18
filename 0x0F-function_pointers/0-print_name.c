#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a string to the name of the person
 * @f: a pointer to the function that prints the name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
