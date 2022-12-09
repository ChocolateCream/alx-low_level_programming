#include <stdio.h>

/**
 * main - Prints the alphabet in small case then in UPPER CASE
 * Return: An exit code of 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
