/**
 * leet - Encodes a string into 1337
 * @str: A pointer to a string
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int i;
	int j;

	char c[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char encs[5] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (i >= 0 && str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = encs[j / 2];
				break;
			}
		}
		i++;
	}
	return (str);
}
