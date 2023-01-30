#include "lists.h"
#include "1-listint_len.c"


/**
 * get_nodeint_at_index - Gets the node with the specified index.
 * @head: Pointer to the head of the list.
 * @index: Index to the node we would like to get.
 *
 * Return: Pointer to the node at the specified index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int len_list;

	if (!head)
		return (NULL);

	len_list = listint_len(head);
	if (len_list - 1 < index)
		return (NULL);

	for (i = 1; i <= index; i++)
		head = head->next;

	return (head);
}
