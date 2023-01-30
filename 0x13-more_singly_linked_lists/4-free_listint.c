#include "lists.h"


/**
 * free_listint - Frees the memory occupied by the list.
 * @head: Pointer to the head node.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
