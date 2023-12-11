#include "main.h"

/**
 * _strpbrk - searches for a set of bytes.
 * @s: target string.
 * @accept: subject of refference
 * Return: poiner to s or Null if unfatched
*/

char *_strpbrk(char *s, char *accept)
{
	char *resetAccept = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = resetAccept;
		s++;
	}
	return (NULL);
}
