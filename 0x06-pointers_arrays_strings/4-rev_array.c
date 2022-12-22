/**
 * reverse_array - Reverses an array of ints
 * @a: A pointer to the array of ints
 * @n: The number of the elements in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int stop;

	i = 0;
	stop = n / 2;

	while (i < stop)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
