#include "lists.h"
#include <stdlib.h>

/**
*list_len - returns the number of elements in a linked list_t list.
*@h: pointer to list_t
*
*Return: return h number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
