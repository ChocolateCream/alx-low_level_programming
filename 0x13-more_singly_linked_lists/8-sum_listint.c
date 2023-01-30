#include "lists.h"


/**
 * sum_listint - Sums the nodes in a list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of the nodes in the list.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!(head))
		return (sum);


	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
