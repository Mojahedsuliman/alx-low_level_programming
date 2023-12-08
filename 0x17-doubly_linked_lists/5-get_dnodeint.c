#include "lists.h"

/*
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: ponter to the head of the list.
 * @index: index of the node, starting at 0.
 *
 * Return: the nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
