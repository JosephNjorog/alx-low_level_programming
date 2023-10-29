#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to extract the bit from.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	return ((int)((n >> index) & 1));
}
