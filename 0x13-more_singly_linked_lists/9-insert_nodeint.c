#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - main function Inserts a new node .
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node .
 * @n: The integer value to be added to the new node.
 *
 * Return: NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	current = *head;

	while (current != NULL)
	{
	if (i == idx - 1)
	{
	
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
	}
	current = current->next;
	i++;
	}
	free(new_node);
	return (NULL);
}
