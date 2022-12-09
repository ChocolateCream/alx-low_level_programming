#include <stdio.h>

/**
 * main - Prints the base 16 numbers
 * Return: An exit code of 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
