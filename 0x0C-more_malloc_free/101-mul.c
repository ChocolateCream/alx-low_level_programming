#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - The main program
 * @argc: An int for the number of arguments
 * @argv: A pointer to the arguments
 *
 * Return: An int for the status code
 */

int main(int argc, char *argv[])
{
	int i, j, len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if ((argv[i][j] >= 48) & (argv[i][j] <= 57))
				continue;
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
