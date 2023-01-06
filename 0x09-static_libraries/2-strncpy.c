#include "2-strlen.c"
#include "main.h"

/**
 * _strncpy - Copies the src string to the dest string
 * @dest: A pointer to the dest string
 * @src: A pointer to the source string
 * @n: an int to the number of chars to copy
 *
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_dest;
	int len_src;

	i = 0;
	len_dest = _strlen(dest);
	len_src = _strlen(src);

	while (i < n)
	{
		if (i >= len_dest)
			break;
		if (i < len_src)
			*(dest + i) = src[i];
		else
			*(dest + i) = '\0';

		i++;
	}
	return (dest);
}
