/**
 * _strspn - Calculates the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: The first string
 * @accept: The string with accepted characters
 *
 * Return: The number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}

	return (count);
}
