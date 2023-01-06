#include "2-strlen.c"
#include "main.h"

/**
 * _strcpy - Copies the string from src to dest
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 *
 * Return: A pointer to the dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len_str;

	len_str = _strlen(src);

	for (i = 0; i < len_str; i++)
	{
		*(dest + i) = src[i];
	}
	*(dest + len_str) = '\0';
	return (dest);
}
