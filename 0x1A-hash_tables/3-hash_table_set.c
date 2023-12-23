#include "hash_tables.h"

/**
 * creates_hash_node - create a new hash node
 * @key: key node
 * @value: value node
 *
 * Return: new node or NULL if failed
*/
hash_node_t *creates_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(value);

	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hash table to add element
 * @key: key node
 * @value: value node
 *
 * Return: 1 if it succeeded, 0 if it failed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}

	new_node = creates_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

