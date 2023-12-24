#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

