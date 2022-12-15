#include "main.h"

/**
 * print_diagonal - Prints a diagonal line with a specific number of units
 * followed by new line
 * @n: The number of units
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
