#include "lists.h"


/**
 * free_listint2 - Frees the memory occupied by the list.
 * @head: Pointer to the head pointer.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)

{
	listint_t *next_node;

	if (!(head))
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
