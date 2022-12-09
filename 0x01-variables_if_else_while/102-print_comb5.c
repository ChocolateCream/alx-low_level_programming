#include <stdio.h>

/**
 * main - Prints all possible different combinations of
 * two numbers each of two digits
 * Return: An exit code of 0
 */

int main(void)
{
	int l; /* stands for the left number*/
	int r; /* stands for the right number*/

	l = 0;

	while (l <= 98)
	{
		r = l + 1;

		while (r <= 99)
		{
			putchar(l / 10 + '0'); /* Converting from int to char */
			putchar(l % 10 + '0');
			putchar(' ');
			putchar(r / 10 + '0');
			putchar(r % 10 + '0');

			if ((l == 98) && (r == 99))
			{
				putchar('\n');
				return (0); /* Function breaker */
			}
			putchar(',');
			putchar(' ');

			r++;
		}
		l++;
	}
	return (0);
}
