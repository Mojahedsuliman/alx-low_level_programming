#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the pointer to the head of the listint_t
 *
 * Returns: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
		const listint_t *temp = head;
		size_t i = 0;

			while (temp)
			{
			printf("%d\n", temp->n);
				temp = temp->next;
				i++;
				if (temp > head)
				{
				printf("ERROR\n");
		}
		}
		return (i);
}
