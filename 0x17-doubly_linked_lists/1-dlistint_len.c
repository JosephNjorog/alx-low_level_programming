#include "lists.h"

/**
 * dlistint_len - count elements of doubly linked list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h)
		++size, h = h->next;

	return (size);
}
