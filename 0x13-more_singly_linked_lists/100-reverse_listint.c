#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: the pointer to first node on the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
		listint_t *prev = NULL;
		listint_t *next = NULL;

		while (*head)
		{
			next = (*head)->next;
			(*head)->next = prev;
			prev = *head;
			*head = next;
		}

		*head = prev;
		return (*head);
}
