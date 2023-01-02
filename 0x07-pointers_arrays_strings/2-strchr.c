/**
 * _strchr - Finds the first occurrence of a char in a string
 * @s: A string that we will search
 * @c: The character we need to find
 *
 * Return: A pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	if (c == '\0')
		return (s + i);

	return (0);
}
