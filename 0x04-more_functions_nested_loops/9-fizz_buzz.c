#include <stdio.h>

/**
 * main - Prints Fizz-Buzz game from 1 to 100
 *
 * Return: an exit code of 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
