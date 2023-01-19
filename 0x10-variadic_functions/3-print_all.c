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
	while ((format) && i < len_str)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				txt = va_arg(args, char *);
				if (txt == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", txt);
				break;
			default:
				hit = 1;
		}
		if ((i != len_str - 1) & (hit != 1))
			printf(", ");
		i++;
		hit = 0;
	}

	printf("\n");
	va_end(args);
}
