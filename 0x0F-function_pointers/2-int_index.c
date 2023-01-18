#include "function_pointers.h"

/**
 * int_index - gets the index of an element
 * @array: an array of ints
 * @size: the size of the array
 * @cmp: a pointer to the action function
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;
	int i;

	idx = -1;

	if ((array == NULL) | (size <= 0) | (cmp == NULL))
		return (idx);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			idx = i;
			break;
		}
	}

	return (idx);
}
