#include <stdlib.h>
#include "_strlen.c"
#include "main.h"

/**
 * argstostr - Concats the arguments passed to the function and adds \\n
 * @ac: The number of arguments passed
 * @av: The arguments passed
 *
 * Return: A pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int k;
	int len;

	if ((ac == 0))
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		len += _strlen(av[i]);
	}

	len = (sizeof(char) + 1) * len + 1;
	arr = malloc(len);

	if (arr == NULL)
		return (NULL);

	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < _strlen(av[j]); k++)
		{
			arr[i + k] = av[j][k];
		}
		arr[i + k] = '\n';
		i += k + 1;
	}

	arr[len - 1] = '\0';
	return (arr);
}
