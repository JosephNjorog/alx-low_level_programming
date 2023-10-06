#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory.
 * @b: parameter function.
 * Return: pointer to new memory.
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
