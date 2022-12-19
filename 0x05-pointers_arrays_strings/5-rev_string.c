#include "2-strlen.c"
#include "main.h"

/**
 * rev_string - Reverses a string inplace
 * @s: A pointer to a string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int len_str;
	char c;

	len_str = _strlen(s);
	i = 0;
	while (i < len_str / 2)
	{
		c = s[i];
		s[i] = s[len_str - i - 1];
		s[len_str - i - 1] = c;
		i++;
	}
}
