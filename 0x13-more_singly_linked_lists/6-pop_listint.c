#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data
 */

int pop_listint(listint_t **head)
{
	int data = 0;

	if (head != NULL && *head != NULL)
	{
	listint_t *temp = *head;

	data = temp->n;

	*head = (*head)->next;
	free(temp);
	}

	return (data);
}
