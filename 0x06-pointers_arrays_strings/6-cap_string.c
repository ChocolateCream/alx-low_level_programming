/**
 * cap_string - Capitalizes the first char of each word
 * @str: A pointer to a string
 *
 * Return: A pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int j;

	int i = 0;
	char chars[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', '(', ')', '{', '}'};

	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;

	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == chars[j])
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
					break;
				}
				i--;
			}
		}
		i++;
	}
	return (str);
}
