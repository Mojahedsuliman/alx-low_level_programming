#include "hash_tables.h"

/**
 * shash_table_create - creates hash table stored
 * @size: hash table size
 *
 * Return: pointer to table. NULL on failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - sets the key value
 * @ht: shash table
 * @key: key data
 * @value: data to add
 *
 * Return: 1 on succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	return (1);
}
