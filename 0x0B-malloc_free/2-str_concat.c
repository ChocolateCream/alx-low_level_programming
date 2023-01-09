#include <stdlib.h>
#include "_strlen.c"
#include "main.h"

/**
 * str_concat - Creates an array that concats 2 strings
 * @s1: The first string that will be concatenated
 * @s2: The second string that will be concatenated
 *
 * Return: A pointer to the created array
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int len_s1;
	int len_s2;
	int i;
	int j;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = _strlen(s1);

	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = _strlen(s2);

	arr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		arr[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		arr[i + j] = s2[j];

	return (arr);
}
