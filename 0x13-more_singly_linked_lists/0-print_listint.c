#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - main function prints all elements of listint.
 * @h: parameter function 1
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
