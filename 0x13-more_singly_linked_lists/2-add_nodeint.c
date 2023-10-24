#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: the pointer to the first node of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh)
	{
	fresh->n = n;
	fresh->next = *head;
	*head = fresh;
	return (fresh);
	}
	else
	{
	return (NULL);
	}
}
