#include "lists.h"


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the list
 *
 * Return: Returns the number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
