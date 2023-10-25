#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop -  a function that finds the loop in a linked list.
 * @head: linked list to search
 *
 * Returns: The address of the node where the loop starts,ro NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
			listint_t *fast = head;
			listint_t *slow = head;

		while (fast->next && fast->next->next)
		{
				fast = fast->next->next;
				slow = slow->next;

				if (fast == slow)
				{
			return (slow);
		}
		}
		return (NULL);
}
