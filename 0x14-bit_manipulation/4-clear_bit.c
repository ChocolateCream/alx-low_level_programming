#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a certain index.
 * @n: A pointer to an unsigned long int for the number.
 * @index: The index of the bit.
 *
 * Return: Staus code of 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size_n;

	size_n = sizeof(*n);
	if (index >= size_n * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
