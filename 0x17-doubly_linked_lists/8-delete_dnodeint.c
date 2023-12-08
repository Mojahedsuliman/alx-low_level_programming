#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current, *second;
	unsigned int i = 0;

	current = *head;

	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second->next = current->next;
				if (current->next != NULL)
					current->next->prev = second;
			}
			free(current);
			return (1);
		}
		second = current;
		current = current->next;
		i++;
	}
	return (-1)
}
