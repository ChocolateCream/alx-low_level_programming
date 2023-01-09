#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - Creates an array of 2d shape
 * @width: The number of columns in the array
 * @height: The number of rows in the array
 *
 * Return: A pointer to the created array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if ((width <= 0) | (height <= 0))
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
