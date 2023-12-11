#include "main.h"

/**
 *_isupper - checks for upewrcase.
 *@c: argument being checked.
 *Return: 1 if uppercase.
 *	  0 if not.
 */

int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
