#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, temp;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		*current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;

			free(temp->key);
			temp->key = NULL;

			free(temp->value);
			temp->value = NULL;

			free(temp);
			temp = NULL;
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	ht->array = NULL;

	free(ht);
	ht = NULL;
}
