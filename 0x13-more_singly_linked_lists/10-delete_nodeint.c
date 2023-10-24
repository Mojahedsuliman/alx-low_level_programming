#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the nod
 * @head: the pointer to the first element
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
		listint_t *temp = *head;
		listint_t *prev = NULL;
		unsigned int x = 0;

		if (*head == NULL)
		return (-1);

		if (index == 0)
		{
		*head = (*head)->next;
		free(temp);
		return (1);
		}

		while (x < index - 1)
		{
			if (!temp || !(temp->next))
			return (-1);
			temp = temp->next;
		x++;
		}

		prev = temp->next;
		temp->next = prev->next;
		free(prev);
		return (1);
}
