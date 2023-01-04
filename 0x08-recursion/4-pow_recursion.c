/**
 * _pow_recursion - Returns the number raised to a power
 * @x: An int to be powered
 * @y: An int representing the power
 *
 * Return: An int representing the number powered to the power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
