#include <stdarg.h>

/**
 * sum_them_all - sums all the passed
 * @n: The number of arguments to sum
 *
 * Return: the sum of the numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	sum = 0;
	if (n == 0)
		return (sum);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
