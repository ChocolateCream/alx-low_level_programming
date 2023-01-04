/**
 * is_sqr - Helper function to check if a function has a root
 * @factor: An int representing one of the root factors
 * @number: An int representing the number we are trying to find the root for
 *
 * Return: An int representing the factor.
 */

int is_sqr(int factor, int number)
{
	if (factor * factor > number)
		return (-1);

	if (factor * factor == number)
		return (factor);

	return (is_sqr(factor + 1, number));
}


/**
 * _sqrt_recursion - Returns the square root of a number
 * @n: An int representing the number
 *
 * Return: An int representing the square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (is_sqr(1, n));

}
