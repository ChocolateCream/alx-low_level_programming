#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals
 * @a: An array of ints
 * @size: The size of the array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	j = 0;

	for (i = 0; i < size * size; i++)
	{
		sum1 = sum1 + a[i];
		i = i + size;
	}

	for (i = 0; i < size; i++)
	{
		j = j + size - 1;
		sum2 = sum2 + a[j];
	}

	printf("%d, %d\n", sum1, sum2);
}
