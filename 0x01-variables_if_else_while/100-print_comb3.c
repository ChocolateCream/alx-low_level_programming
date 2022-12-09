#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * Return: An exit code of 0
 */

int main(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar(i + '0'); /* Converting from int to char */
			putchar(j + '0'); /* Converting from int to char */

			if ((i == 8) && (j == 9))
			{
				putchar('\n');
				return (0); /* Function breaker */
			}
			putchar(',');
			putchar(' ');

			j++;
		}
		i++;
	}
	return (0);
}
