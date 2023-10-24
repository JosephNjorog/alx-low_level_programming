#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
	next = (*head)->next;
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}

	*head = prev;
	return (*head);
}
