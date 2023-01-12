#include <stdlib.h>

/**
 * _calloc - Allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: A pointer to the new memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if ((nmemb == 0) | (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == (NULL))
		return (NULL);

	return (ptr);
}
