#include "main.h"

/**
 * create_array - creates an array of cahracters
 * @size: size of malloc
 * @c: character
 * Return: NULL if size = 0 or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = (char *)malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}

	if (ch == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
