#include "main.h"

/**
 * _abs - gets the absolute value of an int
 * @n: The int to check
 *
 * Return: an int representing the absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);
}
