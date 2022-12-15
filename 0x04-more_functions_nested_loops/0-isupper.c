/**
 * _isupper - checks if a character is upper case
 * @c: The character to check
 *
 * Return: an int of 0 or 1
 */

int _isupper(int c)
{
	if (c < 65)
		return (0);
	if (c > 90)
		return (0);
	return (1);
}
