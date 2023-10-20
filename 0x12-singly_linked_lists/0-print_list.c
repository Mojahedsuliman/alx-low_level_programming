#include "lists.h"

/**
 * _strlen - returning the strings length
 * @s: the string that needs checking
 * Return: int length for that string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)

		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - linking lists prints
 * @h: pointer of the first node
 * Return: lists size
 */

size_t print_list(const list_t *h);

{
	size_t i = 0;

	while (h)

	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nill");
		h = h->next;
		i++;
	}
	return (i);
}
