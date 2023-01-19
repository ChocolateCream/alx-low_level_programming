#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints the passed arguments
 * @format: A string with the format characters
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int len_str = strlen(format);
	va_list args;
	char *txt;
	int hit = 0;

	va_start(args, format);
	while (i < len_str)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				hit = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				hit = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				hit = 1;
				break;
			case 's':
				txt = va_arg(args, char *);
				if (txt == NULL)
					printf("(nil)");
				else
					printf("%s", txt);
				hit = 1;
				break;
		}
		if ((i != len_str - 1) & (hit == 1))
			printf(", ");
		i++;
		hit = 0;
	}

	printf("\n");
	va_end(args);
}
