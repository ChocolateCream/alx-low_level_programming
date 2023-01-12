#include <stdlib.h>

/**
 * array_range - Allocates memory for the ints
 * @min: the min int in the array
 * @max: the max int in the array
 *
 * Return: A pointer to the new memory space
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;

	return (arr);
}
