#include "lists.h"

/**
 * sum_listint - a function calculates the sum of all list dada
 * @head: first node of the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
		int sum = 0;
		listint_t *temp = head;

		while (temp)
		{
		sum += temp->n;
		temp = temp->next;
		}

		return (sum);
}
