#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: A pointer to a string
 *
 * Return: int representing the length of a string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (s[0] == '\0')
	{
		return (0);
	}

	n = 1 + _strlen_recursion(s + 1);

	return (n);
}


/**
 * helper - A helper function to check the characters 1 by 1
 * @s: A pointer to a string
 * @id: An int to the initial index to check
 *
 * Return: int representing the number of mismatches
 */

int helper(char *s, int id)
{
	int idx;
	int counter;

	counter = 0;
	idx = _strlen_recursion(s) / 2 - 1;

	if (id > idx)
		return (0);

	if (s[id] != s[_strlen_recursion(s) - 1 - id])
	{
		counter++;
		return (counter);
	}

	return (counter + helper(s, id + 1));
}


/**
 * is_palindrome - Checks if a string is a palindrome or not
 * @s: A pointer to a string
 *
 * Return: int representing if the string is a palindrome or not
 */

int is_palindrome(char *s)
{
	int helper_result;

	if (_strlen_recursion(s) < 2)
		return (1);


	helper_result = helper(s, 0);
	if (helper_result == 0)
		return (1);

	return (0);
}
