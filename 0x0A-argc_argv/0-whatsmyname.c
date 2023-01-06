#include <stdio.h>

/**
 * main - The main program
 * @argc: An int for the number of arguments
 * @argv: A pointer to the arguments
 *
 * Return: An int for the status code
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
