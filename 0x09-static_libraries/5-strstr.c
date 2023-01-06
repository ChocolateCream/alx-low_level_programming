#include "2-strlen.c"
#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: The haystack string
 * @needle: The needle string
 *
 * Return: A pointer to the first occurence of the needle
 */

char *_strstr(char *haystack, char *needle)
{
	int len_stack;
	int len_needle;
	int i;
	int j;

	len_stack = _strlen(haystack);
	len_needle = _strlen(needle);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (len_stack - i < len_needle)
		{
			return (0);
		}

		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
				continue;
			else
				break;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
	}

	return (0);
}
