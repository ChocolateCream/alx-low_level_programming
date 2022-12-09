#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 * Return: An exit code of 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	i = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + '0'); /* Converting from int to char */
				putchar(j + '0'); /* Converting from int to char */
				putchar(k + '0'); /* Converting from int to char */

				if ((i == 7) && (j == 8) && (k == 9))
				{
					putchar('\n');
					break; /* Function breaker */
				}
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
