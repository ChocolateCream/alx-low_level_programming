#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Creates an array of 2d shape
 * @grid: The 2d array
 * @height: The number of rows in the array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
