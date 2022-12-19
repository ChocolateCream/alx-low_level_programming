#include "2-strlen.c"
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: A pointer to a string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
