#include "lists.h"


/**
 * list_len - Returns the number of list_t elements
 * @h: Pointer to the list
 *
 * Return: Returns the number of list_t elements.
 */

size_t list_len(const list_t *h)
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
