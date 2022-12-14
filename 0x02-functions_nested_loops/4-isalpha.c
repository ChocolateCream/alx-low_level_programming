#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: The character to check
 *
 * Return: an int of 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
