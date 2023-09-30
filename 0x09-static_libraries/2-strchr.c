#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: subject stirng.
 * @c: character to look for.
 * Return: pointer to first occurence.
 *			NULL if not present.
*/

char *_strchr(char *s, char c)
{
	char *point = s;

	while (*point != '\0')
	{
		if (*point == c)
		{
			return (point);
		}
		point++;
	}
	return (NULL);
}
