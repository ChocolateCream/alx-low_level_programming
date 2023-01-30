#include "lists.h"


/**
 * add_nodeint - Add a node to the beginning of a list
 * @head: Pointer to head pointer
 * @n: The in to add to the node
 *
 * Return: Pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	/* Create space in memory for the new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	/* Populate the node with data */
	node->n = n;
	node->next = *head;

	/* Update the pointer to the head */
	*head = node;
	return (*head);
}
