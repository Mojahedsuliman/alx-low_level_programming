#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth list node
 * @head: the first node on list
 * @index: the index of the node
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
		unsigned int x = 0;
		listint_t *temp = head;

		while (temp && x < index)
		{
		temp = temp->next;
		x++;
		}

		return (temp ? temp : NULL);
}
