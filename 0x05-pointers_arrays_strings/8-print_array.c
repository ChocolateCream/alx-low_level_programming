#include <stdio.h>

/**
 * print_array - Prints the first n ints in an array of ints
 * @a: A pointer to an array of ints
 * @n: An int representing the number of ints to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
