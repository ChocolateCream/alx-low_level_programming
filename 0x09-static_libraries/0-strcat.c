#include "2-strlen.c"
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the dest string
 * @src: A pointer to the source string
 *
 * Return: The Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int idx;

	i = 0;
	idx = _strlen(dest);

	while (i >= 0)
	{
		if (src[i] != '\0')
		{
			*(dest + idx + i) = src[i];
			i++;
		}
		else
		{
			i++;
			break;
		}
	}
	*(dest + idx + i) = '\0';
	return (dest);
}
