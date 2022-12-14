#include "main.h"

/**
 * print_sign - prints the sign of a provided int
 * @n: The int to check
 *
 * Return: an int of 0 or 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
