#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The int to check
 *
 * Return: an int representing the absolute value
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		d = d * (-1);
	}

	_putchar (d + '0');
	return (d);
}
