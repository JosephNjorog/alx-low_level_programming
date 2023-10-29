#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary string to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: converted unsigned int, or 0 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
