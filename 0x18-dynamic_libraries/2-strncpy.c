#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination argument.
 * @src: source argument.
 * @n: number of max bytes to copy.
 * Return: retirns (dest)pointer to destination.
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *home = dest;
	int index;

	for (index = 0; index < n; index++)
	{
		if (*src != '\0')
		{
			*home = *src;
			src++;
		}
		else
		{
			*home = '\0';
		}
		home++;
	}
	return (dest);
}
