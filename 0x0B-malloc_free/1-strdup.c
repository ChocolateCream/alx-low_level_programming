#include <stdlib.h>
#include "_strlen.c"
#include "main.h"

/**
 * _strdup - Creates an array with a copy of a string
 * @str: The string that will be copied
 *
 * Return: A pointer to the created array
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * _strlen(str));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
		arr[i] = str[i];

	return (arr);
}
