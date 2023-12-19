#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - creates a new hash table
 * @size: hash table size (array's size)
 *
 * Return: pointer to hash table (Success) | NULL (Failure)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof((*table->array)) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = table->stail = NULL;
	return (table);
}

/**
 * shash_table_get - retrieves value associated with a key in hash table
 * @ht: hash table
 * @key: given key
 *
 * Return: value (Success) | NULL (Failure)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

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

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		next = node->snext;
		free(node->key), free(node->value), free(node);
		node = next;
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	bool comma;

	if (!ht)
		return;

	comma = 0;
	putchar('{');

	node = ht->shead;
	while (node)
	{
		if (comma)
			printf(", ");
		else
			comma = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	putchar('}'), putchar('\n');
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	bool comma;

	if (!ht)
		return;

	comma = 0;
	putchar('{');

	node = ht->stail;
	while (node)
	{
		if (comma)
			printf(", ");
		else
			comma = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	putchar('}'), putchar('\n');
}

/**
 * new_node - create a new shash node
 * @key: node's key
 * @value: node's value
 * @ht: hash table
 * @index: where to insert element in hash table array
 *
 * Return: new node (Success) | NULL (Failure)
 */
shash_node_t *new_node(char *key, char *value, shash_table_t *ht,
unsigned long int index)
{
	shash_node_t *node;

	if (!key || !value || !ht)
		return (NULL);

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->key = key, node->value = value;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (node);
}

/**
 * insert_node - inserts node at its position
 * @node: node to be inserted
 * @tmp: helper node representing the postion
 * @ht: hash table
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int insert_node(shash_node_t *node, shash_node_t *tmp,
shash_table_t *ht)
{
	if (!ht || !node)
		return (0);
	if (tmp)
	{
		node->snext = tmp->snext;
		if (tmp->snext)
			tmp->snext->sprev = node;
		tmp->snext = node;
		node->sprev = tmp;
		if (tmp == ht->stail)
			goto tail;
	}
	else
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = node;
		ht->shead = node;
		if (!ht->stail)
tail:
			ht->stail = node;
	}
	return (1);
}

/**
 * add_node - adds new element to hash table
 * @ht: hash table
 * @key: element's key
 * @value: element's data
 * @index: where to insert element in hash table array
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int add_node(shash_table_t *ht, char *key, char *value,
unsigned long int index)
{
	shash_node_t *node, *tmp;
	unsigned int i, depth;
	size_t l1, l2;

	node = new_node(key, value, ht, index);
	if (!node)
		return (0);

	/* find right position */
	depth = 1, tmp = ht->stail, l1 = strlen(key);
	while (tmp)
	{
		l2 = strlen(tmp->key);
		for (i = 0; i < depth; i++)
		{
			/* check if node's key has ended */
			if (i >= l1)
				goto next_node;
			/* chcek if tmp's key has ended | compare letters */
			if (i >= l2 || tmp->key[i] < node->key[i])
				goto found;
			else if (tmp->key[i] == node->key[i])
				depth++;
		}
next_node:
		tmp = tmp->sprev;
	}

found:
	return (insert_node(node, tmp, ht));
}

/**
 * update_key - updates the value associated with a key if it exists
 * @ht: hash table
 * @index: index in hash table array
 * @key: given key
 * @value: new value
 *
 * Return: 1 (Found and changed) | 0 (Not found)
 */
bool update_key(shash_table_t *ht, const char *key, char *value,
unsigned long int index)
{
	shash_node_t *node;

	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = value;
			return (1);
		}
		node = node->next;
	}

	return (0);
}

/**
 * shash_table_set - add element to hash table
 * @ht: hash table
 * @key: given key
 * @value: given value
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dup_value, *dup_key;

	if (!ht || (!key || !(*key)) || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	dup_value = strdup(value);
	if (!dup_value)
		return (0);

	/* update key if it already exists */
	if (!update_key(ht, key, dup_value, index))
	{
		dup_key = strdup(key);
		if (!dup_key)
		{
			free(dup_value);
			return (0);
		}
		return (add_node(ht, dup_key, dup_value, index));
	}
	return (1);
}
