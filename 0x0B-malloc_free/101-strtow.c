#include <stdlib.h>
#include "_strlen.c"
#include "main.h"

/**
 * trim_outter_space - Trims the white space to the right and left of string
 * @str: The string we need to trim the white space around
 *
 * Return: A pointer to the string
 */

char *trim_outter_space(char *str)
{
	int l, r, i, j, len;
	char *arr;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	if (len == 0)
		return (NULL);

	for (l = 0; l < len; l++)
	{
		if (str[l] != ' ')
			break;
	}

	for (r = 0; r < len; r++)
	{
		if (str[len - r - 1] != ' ')
			break;
	}

	r = len - r;
	arr = malloc(sizeof(char) * (r - l));
	if (arr == NULL)
		return (NULL);

	j = 0;
	for (i = l; i < r; i++)
	{
		arr[j] = str[i];
		j++;
	}

	return (arr);
}


/**
 * get_n_words - Gets the number of words in a string
 * @str: The input string by the user
 *
 * Return: An int for the number of words in the string
 */

int get_n_words(char *str)
{
	int i, len, n_words, n_spaces;
	char *new_str = trim_outter_space(str);

	if (new_str == NULL)
		return (0);

	len = _strlen(new_str);
	if (len == 0)
		return (0);

	n_spaces = 0;
	n_words = 1;
	for (i = 0; i < len; i++)
	{
		if (new_str[i] == ' ')
			n_spaces += 1;
		else if ((new_str[i] != ' ') & (n_spaces != 0))
		{
			n_spaces = 0;
			n_words += 1;
		}
	}

	return (n_words);
}


/**
 * get_n_chars - Gets the number of chars in a string
 * @str: The input string by the user
 *
 * Return: An int for the number of chars in the string
 */

int get_n_chars(char *str)
{
	int i, len, n_chars, n_spaces;
	char *new_str = trim_outter_space(str);

	if (new_str == NULL)
		return (0);

	len = _strlen(new_str);
	if (len == 0)
		return (0);

	n_spaces = 0;
	n_chars = 0;
	for (i = 0; i < len; i++)
	{
		if (new_str[i] == ' ')
			n_spaces += 1;
		else if ((new_str[i] != ' ') & (n_spaces != 0))
		{
			n_spaces = 0;
			n_chars += 2;
		}
		else
			n_chars += 1;
	}

	return (n_chars);
}


/**
 * trim_inner_spaces - Trims the white space in the middle of a string
 * @str: The string we need to trim the white space inside it
 *
 * Return: A pointer to the string
 */

char *trim_inner_spaces(char *str)
{
	int i, j, len, n_words, n_chars, n_spaces;
	char *arr;
	char *new_str = trim_outter_space(str);

	n_words = get_n_words(str);
	n_chars = get_n_chars(str);
	len = _strlen(new_str);
	if ((n_words == 0) | (n_chars == 0) | (len == 0))
		return (NULL);

	arr = malloc(sizeof(char) * (n_chars + 1));
	if (arr == NULL)
		return (NULL);

	n_spaces = 0;
	j = 0;
	for (i = 0; i < len; i++)
	{
		if (new_str[i] == ' ')
		{
			n_spaces += 1;
		}
		else if ((new_str[i] != ' ') & (n_spaces != 0))
		{
			n_spaces = 0;
			arr[j] = ' ';
			j++;
			arr[j] = new_str[i];
			j++;
		}
		else
		{
			arr[j] = new_str[i];
			j++;
		}
	}
	arr[j] = '\0';
	return (arr);
}


/**
 * strtow - Splits a string with a space into 2
 * @str: The string we need to split
 *
 * Return: A pointer to array of strings
 */

char **strtow(char *str)
{
	char **arr;
	int len, i, ii, j, k, n_words, n_chars_in_word;
	char *tr_str = trim_inner_spaces(str);

	n_words = get_n_words(str);
	len = _strlen(tr_str);
	if ((tr_str == NULL) | (n_words == 0) | (len == 0))
		return (NULL);
	arr = malloc(sizeof(char *) * (n_words + 1));
	if (arr == NULL)
		return (NULL);

	n_chars_in_word = 0;
	j = 0;
	k = 0;
	for (i = 0; i <= len; i++)
	{
		if ((tr_str[i] != '\0') & (tr_str[i] != ' '))
		{
			n_chars_in_word += 1;
			continue;
		}

		arr[j] = malloc(sizeof(char) * (n_chars_in_word + 1));
		if (arr[j] == NULL)
			return (NULL);

		for (ii = 0; ii < n_chars_in_word; ii++)
		{
			arr[j][ii] = tr_str[k];
			k++;
		}
		arr[j][ii] = '\0';
		j++;
		k++;
		n_chars_in_word = 0;
	}

	arr[j] = NULL;
	return (arr);
}
