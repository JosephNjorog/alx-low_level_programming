#include <stdio.h>
#include "main.h"

/**
 * get_endianness - main fuction
 * Return: void
 */

int get_endianness(void)

{
	unsigned int x = 1;
	char *byte_ptr = (char *)&x;

	if (*byte_ptr == 1)
	{
	return (1);
	}
	return (0);
}
