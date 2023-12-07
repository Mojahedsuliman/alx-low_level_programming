#include "lists.h"
#include <stdio.h>
/*
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h);
{
		size_t nodes;

		for (nodes = 0; h != NULL; nodes++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
		return (nodes);
}
