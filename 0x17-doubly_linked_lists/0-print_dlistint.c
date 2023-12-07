#include "lists.h"

/**
 * print_dlistint - print element of doubly linked list
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++size;
	}

	return (size);
}
