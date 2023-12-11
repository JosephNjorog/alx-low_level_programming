#include "main.h"

/**
 * _strcmp - compartes string.
 * @s1: argument 1.
 * @s2: argument 2.
 * Return: difference.
*/

int _strcmp(char *s1, char *s2)
{
	int difference = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			difference = (*s1 - *s2);
			return (difference);
		}
		s1++;
		s2++;
	}
	return (difference);
}
