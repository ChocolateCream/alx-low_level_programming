#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints the passed numbers
 * @separator: A string with what to separate the numbers with
 * @n: The number of arguments
 *
 * Return: prints the numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((i != n - 1) & (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
