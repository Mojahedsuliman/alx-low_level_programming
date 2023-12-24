#include "hash_tables.h"

/**
 * shash_table_create - creates stored hash table
 * @size: hash table size
 *
 * Return: pointer to the hash table, or NULL on falied
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *sht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (h->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - sets the value key in the hash table
 * @ht: stored hash table
 * @value: value to add
 * @key: key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp, *prev;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
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
		temp = ht->shead;
		prev = NULL;

		while (temp != NULL && strcmp(key, temp->key) > 0)
		{
			prev = temp;
			temp = temp->snext;
		}

		if (prev == NULL)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			new_node->snext = prev->snext;
			new_node->sprev = prev;
			if (prev->snext != NULL)
			{
				prev->snext->sprev = new_node;
			}
			else
			{
				ht->stail = new_node;
			}
			prev->snext = new_node;
		}
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
