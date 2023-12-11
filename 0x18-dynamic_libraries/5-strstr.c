#include "main.h"

/**
 * _strstr - finds needle in a haystack.(substring in a string)
 * @haystack: the target string.
 * @needle: the substring.
 * Return: pointer to beginning of substring.
 *			Null if absent
*/

char *_strstr(char *haystack, char *needle)
{
	char *haystackPtr = haystack;

	while (*haystackPtr != '\0')
	{
		char *needlePtr = needle;

		while (*needlePtr != '\0' && *haystackPtr == *needlePtr)
		{
			haystackPtr++;
			needlePtr++;
		}
		if (*needlePtr == '\0')
		{
			return (haystackPtr - (needlePtr - needle));
		}
		haystackPtr++;
	}
	return (NULL);
}
