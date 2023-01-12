#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The number of bytes to allocate
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
