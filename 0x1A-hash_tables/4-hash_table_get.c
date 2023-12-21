#include "hash_tables.h"

/**
 * hash_table_get - Retrieving a value associated with a key
 * @ht: Hash table we want to look into
 * @key: The key we are looking for
 * Return: A value associated with the element, or NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodo;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	nodo = ht->array[i];

	for (; nodo != NULL; nodo = nodo->next)
	{
		if (strcmp(nodo->key, key) == 0)
			return (nodo->value);
	}

	return (NULL);
}
