#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the pointer to the freed list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
		listint_t *temp;

		while (*head)
		{
			temp = *head;
			temp = (*head)->next;
			free(*head);
			}
				*head = NULL;
}
