#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given p
 *@head: the pointer to the first node
 *@idx: the index of the fresh node
 *@n: the integer to add
 *
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh;
	listint_t *temp = *head;
	unsigned int x;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
	return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
	fresh->next = *head;
	*head = fresh;
	return (fresh);
	}

	for (x = 0; temp && x < idx; x++)
	{
	if (x == idx - 1)
	{
	fresh->next = temp->next;
	temp->next = fresh;
	return (fresh);
	}
	else
	temp = temp->next;
	}

	return (NULL);
}
