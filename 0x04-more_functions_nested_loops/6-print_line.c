#include "main.h"

/**
 * print_line - Prints a line with a specific number of units
 * followed by new line
 * @n: The number of units
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
