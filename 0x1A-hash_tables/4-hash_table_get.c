#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves value associated with a key in hash table
 * @ht: hash table
 * @key: given key
 *
 * Return: value (Success) | NULL (Failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}

	return (0);
}
