#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the passed strings
 * @separator: A string with what to separate the numbers with
 * @n: The number of arguments
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *txt;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		txt = va_arg(args, char *);
		if (txt == NULL)
			printf("(nil)");
		else
			printf("%s", txt);

		if ((i != n - 1) & (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
