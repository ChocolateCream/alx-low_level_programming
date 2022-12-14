#include "main.h"

/**
 * jack_bauer - Print every minute within 24 hours
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int counter;
	int max_counter;
	int hl;
	int hr;
	int ml;
	int mr;

	counter = 0;
	max_counter = 60 * 24;

	for (hl = 0; hl <= 2; hl++)
	{
		for (hr = 0; hr <= 9; hr++)
		{
			for (ml = 0; ml <= 5; ml++)
			{
				for (mr = 0; mr <= 9; mr++)
				{
					counter = counter + 1;
					if (counter > max_counter)
						break;

					_putchar(hl + '0');
					_putchar(hr + '0');
					_putchar(':');
					_putchar(ml + '0');
					_putchar(mr + '0');
					_putchar('\n');

				}
			}

		}
	}
}
