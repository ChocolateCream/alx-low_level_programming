#include "lists.h"
#include "1-listint_len.c"


/**
 * delete_nodeint_at_index - Deletes the node at the specified index.
 * @head: Pointer to the head pointer.
 * @index: The index of the node to delete.
 *
 * Return: An int as a status code.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len_list, i;
	listint_t *moving_head, *node_to_del;

	if ((!head) || (!(*head)))
		return (-1);

	len_list = listint_len(*head);
	if (index > len_list - 1)
		return (-1);

	moving_head = *head;
	if (index == 0)
	{
		if ((*head)->next)
			*head = (*head)->next;
		free(moving_head);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		moving_head = moving_head->next;

	node_to_del = moving_head->next;
	moving_head->next = node_to_del->next;
	free(node_to_del);
	return (1);
}
