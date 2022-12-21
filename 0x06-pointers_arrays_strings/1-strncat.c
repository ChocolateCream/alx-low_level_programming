#include "_strlen.c"
#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: A pointer to the dest string
 * @src: A pointer to the source string
 * @n: an int to the number of chars to concat
 *
 * Return: The Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int idx;

	i = 0;
	idx = _strlen(dest);

	while (i < n)
	{
		if (src[i] != '\0')
		{
			*(dest + idx + i) = src[i];
			i++;
		}
		else
		{
			i++;
			*(dest + idx + i) = '\0';
			break;
		}
	}
	return (dest);
}
