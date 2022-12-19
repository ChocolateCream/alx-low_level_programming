#include "2-strlen.c"
#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by new line
 * @str: A pointer to a string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int n;
	int len_str;

	len_str = _strlen(str);
	if (len_str % 2 == 0)
		n = len_str / 2;
	else
		n = (len_str - 1) / 2;

	i = len_str - n;

	while (i < len_str)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
