#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer then the list_t list then print
 * Return: number that printing nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t ct = 0;

	while (curr != NULL)
	{
	printf("[%d] %s\n", ct, curr->str);
	curr = curr->next;
	ct++;
	}
	return (ct);
}
