#include "hash_tables.h"

/**
 * shash_table_create - creates stored hash table
 * @size: hash table size
 *
 * Return: pointer to the hash table, or NULL on falied
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
	{
		return (NULL);
	}
	sht->size = size;
	sht->array = calloc(size, sizeof(shash_node_t *));
	if (sh->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}
