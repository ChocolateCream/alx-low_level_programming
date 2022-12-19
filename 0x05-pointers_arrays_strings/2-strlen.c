/**
 * _strlen - Calculates the length of a string
 * @s: A pointer to a string
 *
 * Return: An int representing the number of chars in string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}
