#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of a specific size and
 * populates the array with a specific character
 * @size: The number of characters in the array
 * @c: The character that will be used to populate the array
 *
 * Return: A pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
		arr[i] = c;

	if (arr == NULL)
		return (NULL);

	return (arr);
}
