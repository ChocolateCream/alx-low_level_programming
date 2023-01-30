#include "lists.h"


/**
 * add_nodeint_end - Add a node to the end of a list
 * @head: Pointer to head pointer
 * @n: The in to add to the node
 *
 * Return: Pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *node;

	/* Create space in memory for the new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	/* If the node is the first node */
	if (!(*head))
	{
		*head = node;
		return (*head);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (*head);
}
