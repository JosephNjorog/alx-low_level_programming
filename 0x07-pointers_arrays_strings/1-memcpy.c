#include "main.h"

/**
 * _memcpy - copies a memory area.
 * @dest: copy destination.
 * @src: source
 * @n: number of bytes to copy.
 * Return: final dest value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}
