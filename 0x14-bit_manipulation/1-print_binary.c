#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of the argument.
 * @n: An unsigned long int.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask, size_n, i;
	int print_0s;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1;
	size_n = sizeof(n) * 8;

	for (i = 0; i < size_n - 1; i++)
		mask *= 2;

	print_0s = 0;
	while (mask != 0)
	{
		if ((mask & n) != 0)
		{
			_putchar('1');
			print_0s = 1;
		}

		if (((mask & n) == 0) && (print_0s == 1))
		{
			_putchar('0');
		}

		mask = mask >> 1;
	}
}
