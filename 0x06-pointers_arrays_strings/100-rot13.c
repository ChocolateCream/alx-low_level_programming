/**
 * rot13 - Shift all the characters by 13
 * @str: A pointer to a string
 *
 * Return: A pointer to the shifted string
 */

char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'A' && str[i] <= 'M') ||
			(str[i] >= 'a' && str[i] <= 'm'))
			{
				str[i] = str[i] + 13;
				break;
			}
			str[i] = str[i] - 13;
			break;
		}
		i++;
	}
	return (str);
}
