#include "lists.h"


/**
 * listint_len - Returns the number of nodes in the list
 * @h: Pointer to the list
 *
 * Return: Returns the number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}
