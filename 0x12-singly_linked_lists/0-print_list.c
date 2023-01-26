#include "lists.h"


/**
 * print_list - Prints all the elements of list_t
 * @h: Pointer to the list
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h->next)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		h = h->next;
	}

	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	count += 1;

	return (count);
}
