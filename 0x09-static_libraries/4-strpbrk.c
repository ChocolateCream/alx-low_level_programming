/**
 * _strpbrk - Finds the first occurrence of an intersection in chars
 * @s: The first string
 * @accept: The string with accepted characters
 *
 * Return: A pointer to the first occurence of that char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return (0);
}
