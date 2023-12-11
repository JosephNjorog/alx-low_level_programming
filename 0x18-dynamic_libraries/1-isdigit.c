#include "main.h"

/**
 *_isdigit - checks for digit.
 *@c: rgument to check.
 *Return: 1 if digit.
 *	  0 if not.
 */

int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
