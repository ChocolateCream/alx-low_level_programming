#include "main.h"

/**
 * print_chessboard - Prints characters as an 8x8 chess board
 * @a: An 8x8 array
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
