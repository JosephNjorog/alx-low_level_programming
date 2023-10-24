#include "lists.h"

/**
 * find_listint_loop - finds loop in a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (tortoise && hare && hare->next)
	{
	tortoise = tortoise->next;
	hare = hare->next->next;
	if (tortoise == hare)
	{
	tortoise = head;

	while (tortoise != hare)
	{
	tortoise = tortoise->next;
	hare = hare->next;
	}
	return (tortoise);
	}
	}
	return (NULL);
}
