#include <stdio.h>

/**
 * array_iterator - functions that excutes a function
 * @array: array
 * @size:size of an array
 * @action:function to perfom
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
