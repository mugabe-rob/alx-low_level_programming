#include "hash_tables.h"

/**
 * hash_table_set - Adding an element to the hash table
 * @ht: The hash table
 * @key: A key
 * @value: A value associated with the key
 * Return: 1 if its succeeded 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long i, counter;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	counter = ht->counter;
	i = key_index((const unsigned char *)key, counter);

	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		ht->array[i]->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
