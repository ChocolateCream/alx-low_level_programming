#include <stdio.h>

/**
 * main - Prints the alphabet in small case
 * Return: An exit code of 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
