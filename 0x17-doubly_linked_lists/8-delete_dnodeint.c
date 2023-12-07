#include "lists.h"

/*
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		dlistint_t *tmp = *head;
		*head = (*head)->next;
		if (*head != Null)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	return (0);
}
