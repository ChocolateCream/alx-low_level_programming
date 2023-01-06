#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main program
 * @argc: An int for the number of arguments
 * @argv: A pointer to the arguments
 *
 * Return: An int for the status code
 */

int main(int argc, char *argv[])
{
	int i;
	int remaining;
	int n_coins;
	int n_coints_temp;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	n_coins = 0;
	remaining = atoi(argv[1]);
	for (i = 0; remaining != 0; i++)
	{
		n_coints_temp = remaining / cents[i];
		n_coins += n_coints_temp;
		remaining -= n_coints_temp * cents[i];
	}

	printf("%d\n", n_coins);
	return (0);
}
