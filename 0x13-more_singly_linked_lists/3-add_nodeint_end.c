#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t
 * @head: the pointer to the first node of the list
 * @n: integer to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
		listint_t *fresh;
		listint_t *temp;
		*temp = *head;
		fresh = malloc(sizeof(listint_t));
		if (fresh == NULL)
		{
		return (NULL);
		}
		fresh->n = n;
		fresh->next = NULL;
		if (*head == NULL)
		{
		*head = fresh;
		return (fresh);
	}
	while (temp->next != NULL)
	{
	temp = temp->next;
	temp->next = fresh;
	return (fresh);
	}
