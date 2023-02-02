#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips the 0s and the 1s between 2 numbers.
 * @n: A pointer to an unsigned long int for the first number.
 * @m: A pointer to an unsigned long int for the first number.
 *
 * Return: The number of bits we need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum, size_n, i;
	unsigned long int temp, temp2;

	temp = n ^ m;
	sum = 0;
	size_n = sizeof(n) * 8;

	for (i = 0; i < size_n; i++)
	{
		temp2 = temp >> i;
		if ((temp2 & 1) == 1)
			sum += 1;
	}

	return (sum);
}
