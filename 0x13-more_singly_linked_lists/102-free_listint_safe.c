#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL)
		return (0);
	current = *h;

	while (current != NULL)
	{
	size++;
	next = current->next;
	free(current);
	current = next;
	}
	*h = NULL;
	return (size);
}
