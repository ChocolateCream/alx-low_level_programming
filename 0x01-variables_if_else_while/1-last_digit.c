#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the units digit in a specific decimal number
 * Return: An exit code of 0
 */

int main(void)
{
	int n;
	int units;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	units = n % 10;

	printf("Last digit of %d is %d and ", n, units);
	if (units > 5)
		printf("is greater than 5\n");
	else if (units == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");

	return (0);
}
