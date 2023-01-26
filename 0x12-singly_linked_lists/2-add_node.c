#include "lists.h"
#include<string.h>


/**
 * add_node - Adds a node to the start of a list
 * @head: A pointer to the head pointer of the list
 * @str: The string for the added node.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;

	/* Return the pointer to the list */
	return (new);
}
