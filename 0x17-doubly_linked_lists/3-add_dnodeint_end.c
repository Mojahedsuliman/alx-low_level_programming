#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: integer to add.
 *
 * Return: the address of the new element, or NULL in case of failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	new->prev = NULL;
	*head = new;
	return (new);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
