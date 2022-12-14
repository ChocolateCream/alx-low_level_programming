#include "main.h"

/**
 * times_table - Print the times table up to 9
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i;
	int j;
	int result;
	int units;
	int tens;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result < 10)
			{
				if (j != 0)
					_putchar(' ');

				_putchar(result + '0');
			}
			else
			{
				units = result % 10;
				tens = result / 10;
				_putchar(tens + '0');
				_putchar(units + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
