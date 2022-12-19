#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: A pointer to a string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		else
			break;
		i++;
	}
	_putchar('\n');
}
