#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of dlistint
 * @head: head node
 * @n: new node's value
 *
 * Return: address of new element (Success) | NULL (Failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n, new_node->prev = NULL, new_node->next = NULL;

	if (head && (*head))
	{
		(*head)->prev = new_node;
		new_node->next = *head;
	}
	if (head)
		*head = new_node;

	return (new_node);
}
