#include <stdio.h>

/**
 * main - Prints the alphabet in small case and in reverse order
 * Return: An exit code of 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
