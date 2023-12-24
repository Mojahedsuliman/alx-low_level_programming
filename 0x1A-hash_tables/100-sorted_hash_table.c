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
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);

	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;

		return (1);
	}
}
