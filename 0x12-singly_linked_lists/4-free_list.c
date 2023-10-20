#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free linked list
 * @head: list_t will be freed
 */
void free_list(list_t *head)
{
	list_t *tent;

	while (head)
	{
		tent = head->next;
		free(head->str);
		free(head);
		head = tent;
	}
}
