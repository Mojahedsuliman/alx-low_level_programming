#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *current;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	current = *head;
	while (i < index)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	tmp = current->next;
	current->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = current;
	free(tmp);
	return (1);
}
