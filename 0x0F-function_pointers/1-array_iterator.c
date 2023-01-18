#include "function_pointers.h"

/**
 * array_iterator - prints each element in an array
 * @array: an array of ints
 * @size: the size of the array
 * @action: a pointer to the action function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((action != NULL) & (array != NULL))
		for (i = 0; i < size; i++)
			action(array[i]);
}
