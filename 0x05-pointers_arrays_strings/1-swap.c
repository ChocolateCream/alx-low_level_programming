/**
 * swap_int - Updates an int value to 98
 * @a: A pointer to an int a
 * @b: A pointer to an int b
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
