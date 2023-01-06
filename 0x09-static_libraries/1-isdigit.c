/**
 * _isdigit - checks if a character is a single digit
 * @c: The character to check
 *
 * Return: an int of 0 or 1
 */

int _isdigit(int c)
{
	if (c < 48)
		return (0);
	if (c > 57)
		return (0);
	return (1);
}
