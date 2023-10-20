#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding a new node to the linked list begin
 * @head: double type pointer to the list_t
 * @str: a new string adding to nodes
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	unsigned int len = 0;

	len++;
		while (str[len])

			fresh = malloc(sizeof(list_t));
	if
		(!fresh)
			return (NULL);

	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = (*head);
	(*head) = fresh;

	return (*head);
}
