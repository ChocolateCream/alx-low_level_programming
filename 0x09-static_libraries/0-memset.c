/**
 * _memset - Fills the memory with a specific character
 * @s: A pointer to the characters in memory
 * @b: The character we will use to fill the memory
 * @n: An unsigned int to the number of characters to fill in memory
 *
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
