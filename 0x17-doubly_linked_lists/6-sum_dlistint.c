#include "lists.h"

/**
 * sum_dlistint - compute sum of all data of dlistint
 * @head: head node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
