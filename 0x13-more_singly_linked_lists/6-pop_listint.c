#include "lists.h"


/**
 * pop_listint - Deletes a specific node.
 * @head: Pointer to the head pointer.
 *
 * Return: The value of n of the deleted node.
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head_node;
	int node_n;

	if (!(head))
		return (0);

	if (!(*head))
		return (0);

	node_n = (*head)->n;
	new_head_node = (*head)->next;
	free(*head);
	*head = new_head_node;
	return (node_n);
}
