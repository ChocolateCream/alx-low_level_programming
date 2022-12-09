#include <stdio.h>

/**
 * main - Prints the alphabet in small case except q and e
 * Return: An exit code of 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
