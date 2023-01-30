#include "lists.h"
#include "1-listint_len.c"


/**
 * insert_nodeint_at_index - Inserts a node in a specific index.
 * @head: Pointer to the head pointer.
 * @idx: The index in which to insert the node.
 * @n: The value of the inserted node.
 *
 * Return: Pointer to the inserted node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len_list;
	listint_t *moving_head, *new_node;

	if ((!(*head)) & (idx != 0))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;

	/* Return NULL if the node can't be inserted */
	len_list = listint_len(*head);
	if (idx > len_list)
		return (NULL);

	/* Inserting the node as the first node */
	if (idx == 0)
	{
		if (!(*head))
			*head = new_node;
		else
		{
			new_node->next = *head;
			*head = new_node;
		}
		return (*head);
	}

	/* Inserting the node at any idx other than idx = 0 */
	moving_head = *head;
	for (i = 1; i < idx; i++)
		moving_head = moving_head->next;
	if (moving_head->next)
		new_node->next = moving_head->next;
	moving_head->next = new_node;
	return (new_node);
}
