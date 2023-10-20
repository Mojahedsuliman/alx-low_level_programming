#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adding a new node at the end linked list
 * @head: double types pointer to list_t list
 * @str: string will putting in the fresh node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int len = 0;
	list_t *fresh;
	list_t *temp = *head;


	len++;
	while (str[len])

		fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);
	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = fresh;
	return (fresh);
}
