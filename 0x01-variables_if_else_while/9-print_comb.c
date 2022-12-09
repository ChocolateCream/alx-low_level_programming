#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9
 * Return: An exit code of 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
