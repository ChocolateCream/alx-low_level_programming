#include "main.h"
#include <stdio.h>

/**
 * get_bit - Gets the value of a bit at a certain index.
 * @n: An unsigned long int for the number.
 * @index: The index of the bit.
 *
 * Return: An int with the bit at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size_n;

	size_n = sizeof(n);
	if (index >= size_n * 8)
		return (-1);

	return ((n >> index) & 1);
}
