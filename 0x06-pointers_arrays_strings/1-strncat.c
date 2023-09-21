#include "main.h"

/**
 * _strncat - concantenates two strings.
 * @dest: arg to concantinate to.
 * @src: arg to concantinate from.
 * @n: arg to poitn out number of bytes.
 * Return: (dest) poiner to original start dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	char *home = dest;
	char *away = src;


	while (*away != '\0' && n > 0)
	{
		*home = *away;
		home++;
		away++;
		n--;
	}

	*home = '\0';
	return (dest);

}
