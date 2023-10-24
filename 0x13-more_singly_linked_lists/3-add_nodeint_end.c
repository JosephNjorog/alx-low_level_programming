#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end.
 * @head: pointer to a pointer.
 * @n: function parameter.
 * Return: NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *ne_node = malloc(sizeof(listint_t));

	if (ne_node == NULL)
	{
		return (NULL);
	}
	ne_node->n = n;
	ne_node->next = NULL;

	if (*head == NULL)
	{
	*head = ne_node;
	}
	else
	{
	listint_t *current = *head;

	while (current->next != NULL)
	{
	current = current->next;
	}

	current->next = ne_node;
	}
	return (ne_node);
}
