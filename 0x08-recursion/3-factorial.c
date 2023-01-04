/**
 * factorial - Returns the factorial of a number
 * @n: An int to calculate the factorial of
 *
 * Return: An int representing the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
