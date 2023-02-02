#include "main.h"


/**
 * binary_to_uint - converts a number from binary to unsigned int.
 * @b: Pointer to string with the binary representation to the number.
 *
 * Return: An unsigned int representation to the binary number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum, multiplier;

	if (!b)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}

	sum = 0;
	multiplier = 1;
	while (i != 0)
	{
		i--;
		sum += multiplier * (b[i] - '0');
		multiplier *= 2;
	}

	return (sum);
}
