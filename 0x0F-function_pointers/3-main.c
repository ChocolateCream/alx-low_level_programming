#include "3-calc.h"
#include <stdio.h>

/**
 * main - the main program
 * @argc: the number of arguments
 * @argv: the arguments themselves
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int output;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	output = function(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", output);

	return (0);
}
