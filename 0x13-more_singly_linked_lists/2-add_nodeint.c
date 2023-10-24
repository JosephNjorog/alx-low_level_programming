#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - Adds new nodes.
 * @n: the parameter function.
 * @head: pointer to a pointer.
 * Return: null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y_node = malloc(sizeof(listint_t));

	if (y_node == NULL)
	{
	return (NULL);
	}
	y_node->n = n;
	y_node->next = *head;

	*head = y_node;
	return (y_node);
}
