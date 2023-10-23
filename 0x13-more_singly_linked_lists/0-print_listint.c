#include "lists.h"

/**
 * print_listint - a function that prints all elements of a listint_t list
 * @h: linked list type will print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
