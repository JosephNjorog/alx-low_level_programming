#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a given index in dlistint
 * @head: head node
 * @index: given index
 *
 * Return: node at index (Found) | NULL (Not found)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}
