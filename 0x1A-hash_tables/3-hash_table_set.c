#include "hash_tables.h"

/**
 * add_node - adds a new node to the hash table
 * @key: the key to add
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
hash_table_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)

		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = (value != NULL) ? strdup(value) : "";
	if (value != NULL && new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to add or update
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (value == NULL)
		value = "";

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	return (add_node_to_table(ht, index, key, value));
}

