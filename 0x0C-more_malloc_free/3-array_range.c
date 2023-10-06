#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @max: parameter function 1
 * @min: parameter function 2
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *result = NULL;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * size);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
