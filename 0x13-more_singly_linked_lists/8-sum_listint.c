#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data.
 * @head: A pointer to the head of the list.
 *
 * Return: 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
