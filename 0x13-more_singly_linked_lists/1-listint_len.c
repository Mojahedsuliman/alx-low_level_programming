#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in listint_t
 * @h: linked list listint_t type
 *
 * Return: nodes numbers
 */
size_t listint_len(const listint_t *h)
{
		size_t node = 0;

		while (h)
		{
		node++;
		h = h->next;
	}
	return (node);
}
