#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of chars in the second string to concat
 *
 * Return: A pointer to the new memory spaces with the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	char *s;
	unsigned int len;
	unsigned int i;
	unsigned int j;

	if (s2 == NULL)
	{
		s = "";
		len = 0;
	}

	else if (strlen(s2) <= n)
	{
		s = s2;
		len = strlen(s2);
	}

	else
	{
		s = s2;
		len = n;
	}

	arr = malloc(sizeof(char) * (strlen(s1) + len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		arr[i] = s1[i];

	for (j = 0; j < len; j++)
		arr[i + j] = s[j];

	arr[i + j] = '\0';

	return (arr);
}
