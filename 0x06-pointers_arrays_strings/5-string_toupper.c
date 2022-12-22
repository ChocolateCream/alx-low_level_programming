/**
 * string_toupper - Converts a lower case string to upper case
 * @str: A pointer to a string
 *
 * Return: A pointer to the upper cased string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
