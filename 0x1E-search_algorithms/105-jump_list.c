#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for value in linked list using Jump search algorithm
 * @list: pointer to head of list
 * @size: number of nodes in list
 * @value: value to searched for
 *
 * Return: pointer to first node (Exists) | NULL (Not Exists)
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i;
	short more;
	listint_t *start, *end;

	if (!list)
		return (NULL);

	end = list, more = 1;
	while (more)
	{
		if (end->n >= value)
			break;
		start = end;
		for (i = 0; i < sqrt(size); i++)
		{
			if (!end->next)
			{
				more = 0;
				break;
			}
			end = end->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start->index,
end->index);
	while (start && start->n <= end->n)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start  = start->next;
	}
	return (NULL);
}
