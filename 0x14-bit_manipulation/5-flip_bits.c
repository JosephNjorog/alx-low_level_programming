#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip to get from n to m.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
	if (xor_result & 1)
		count++;

	xor_result >>= 1;
	}
	return (count);
}
