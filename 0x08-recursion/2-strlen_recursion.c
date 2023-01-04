/**
 * _strlen_recursion - Returns the length of a string
 * @s: A pointer to a string
 *
 * Return: int representing the length of a string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (s[0] == '\0')
	{
		return (0);
	}

	n = 1 + _strlen_recursion(s + 1);

	return (n);
}
