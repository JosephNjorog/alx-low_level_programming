#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of dlistint
 * @head: head node
 * @n: new element's value
 *
 * Return: adress of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n, new_node->next = NULL, new_node->prev = NULL;

	if (!head || !(*head))
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp && tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}

	return (new_node);
}
