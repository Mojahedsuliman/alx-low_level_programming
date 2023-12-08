#include "lists.h"

/*
 * insert_dnodeint_at_index - inserts a new node at a given point in a list.
 * @h: pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: integer to be added in the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);
		next = current->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = next;
	new->prev = current;
	current->next = new;
	if (next != NULL)
		next->prev = new;
	return (new);
}
