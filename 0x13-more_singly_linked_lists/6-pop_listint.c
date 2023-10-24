#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a list
 * @head: the pointer to the first element
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
		int n;
		listint_t *temp;

		if (head == NULL)
		return (0);

		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (n);
}
