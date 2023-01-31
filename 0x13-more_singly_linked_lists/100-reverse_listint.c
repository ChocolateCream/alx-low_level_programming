#include "lists.h"


/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the head pointer.
 *
 * Return: The pointer to the new head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if ((!head) || (!(*head)))
		return (NULL);

	if (!((*head)->next))
		return (*head);

	temp1 = *head;
	*head = (*head)->next;
	temp1->next = NULL;
	while ((*head)->next)
	{
		temp2 = *head;
		*head = (*head)->next;
		temp2->next = temp1;
		temp1 = temp2;
	}
	(*head)->next = temp1;
	return (*head);
}
