#include "main.h"

/**
 * _strspn - gets length of prefix substring.
 * @s: target.
 * @accept: trigger.
 * Return: bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	char *originalAccept = accept;

	while (*s != '\0')
	{
		int flag = 0;

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				flag = 1;
				break;
			}
			accept++;
		}

		if (!flag)
		{
			break;
		}

		byte++;
		s++;
		accept = originalAccept;
	}
	return (byte);
}
