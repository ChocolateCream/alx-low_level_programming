/**
 * _strcmp - Compares string 1 to string 2
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: An int for the comparison result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (s1[i] == s2[i] && s1[i] != '\0')
		{
			i++;
			continue;
		}
		else
			break;
	}
	return (s1[i] - s2[i]);
}
