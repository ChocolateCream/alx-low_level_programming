#include "lists.h"
#include<string.h>


/**
 * add_node_end - Adds a node to the end of a list
 * @head: A pointer to the head pointer of the list
 * @str: The string for the added node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	list_t **head_temp;

	/* Creating the memory for the new node and handling if it failed */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	/* Filling the node with the needed data */
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	/* In case no previous nodes */
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	/* In case head is already a node */
	head_temp = head;
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (*head_temp);
}
