#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head node
 * @index: given index
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		if (tmp)
			tmp->prev = NULL;
		*head = tmp;
	}
	else
	{
		tmp = *head;
		for (i = 0; tmp && i < index; i++)
			tmp = tmp->next;
		if (!tmp)
			return (-1);
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
