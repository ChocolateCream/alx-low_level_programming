#include "2-strlen.c"
#include "main.h"

/**
 * puts2 - Prints every other character followed by new line
 * @str: A pointer to a string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;
	int len_str;

	i = 0;
	len_str = _strlen(str);

	while (i < len_str)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
