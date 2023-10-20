#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to begin of the list
 * @head: pointer address
 * @str: filed of nodes
 *
 * Return: lists size
 */
list_t *add_node(list_t **head, const char *str);
{

	list_t *the_new = malloc(sizeof(list_t));

	if (!head || !the_new)
	return (NULL);
	if (str)

	{
		the_new->str = strdup(str);
		if (the_new->str)
		{
			free(the_new);
			return (NULL);
		}
		the_new->len = _strlen(the_new->str);
	}

	the_new->next = *head;
	*head = the_new;
	return (the_new);
}
