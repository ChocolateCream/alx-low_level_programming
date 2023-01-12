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
	char *sa;
	char *sb;
	unsigned int len;
	unsigned int i;
	unsigned int j;

	if (s2 == NULL)
	{
		sb = "";
		len = 0;
	}
	else if (strlen(s2) <= n)
	{
		sb = s2;
		len = strlen(s2);
	}
	else
	{
		sb = s2;
		len = n;
	}

	if (s1 == NULL)
		sa = "";
	else
		sa = s1;

	arr = malloc(sizeof(char) * (strlen(sa) + len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(sa); i++)
		arr[i] = sa[i];
	for (j = 0; j < len; j++)
		arr[i + j] = sb[j];

	arr[i + j] = '\0';

	return (arr);
}
