#include "lists.h"

/**
 * free_list - Frees the memory from all the list elements
 * @head: A pointer to the head pointer of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head->next);
	free(head);
}
