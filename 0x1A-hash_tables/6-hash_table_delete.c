#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void 
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || hr->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i];
			ht->array[i] = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	node = NULL;
	ht->size = 0;
	free(ht);
}
