#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a certain index.
 * @n: A pointer to an unsigned long int for the number.
 * @index: The index of the bit.
 *
 * Return: Staus code of 1 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size_n, i;
	unsigned long int mask;

	size_n = sizeof(*n);
	if (index >= size_n * 8)
		return (-1);

	mask = 1;
	for (i = 1; i <= index; i++)
		mask *= 2;

	*n = *n | mask;
	return (1);
}
