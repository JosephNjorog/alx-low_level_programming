#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (!head)
		return;

	next_node = head->next;
	while (head)
	{
		free(head);
		head = next_node;
		if (next_node)
			next_node = next_node->next;
	}
}
