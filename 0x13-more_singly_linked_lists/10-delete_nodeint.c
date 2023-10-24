#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given index .
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting at 0).
 *
 * Return: -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	current = *head;
	while (current != NULL)
	{
		if (i == index - 1)
		{
		if (current->next == NULL)
			return (-1);
		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
