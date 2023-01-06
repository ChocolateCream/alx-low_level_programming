#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: The character to check
 *
 * Return: an int of 0 or 1
 */

int _islower(int c)
{
	if (c < 97)
		return (0);
	if (c > 122)
		return (0);
	return (1);
}
