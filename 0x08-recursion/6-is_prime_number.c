/**
 * helper_prime - Helper function to check if a number is prime
 * @x: An int representing the number
 * @y: An int representing the possible values to divide the number over
 *
 * Return: An int representing if the number is prime or not
 */

int helper_prime(int x, int y)
{
	if (x < 2)
		return (0);

	if (y == 1)
		return (1);

	if (x % y == 0)
		return (0);

	return (helper_prime(x, y - 1));
}


/**
 * is_prime_number - Uses the helper function to check if a number is prime
 * @n: An int representing the number
 *
 * Return: An int representing if the number is prime or not
 */

int is_prime_number(int n)
{
	return (helper_prime(n, n - 1));
}
