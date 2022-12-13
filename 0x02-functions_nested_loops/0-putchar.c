#include "main.h"

/**
 * main - Print the string _putchar followed by a new line
 * Return: An exit code of 0
 */

int main(void)
{
	int i;
	char *str;

	str = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
