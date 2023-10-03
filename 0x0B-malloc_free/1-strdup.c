#include "main.h"

/**
 * _strdup - Returns pointer to string duplicate
 * @str: pointer to string
 * Return: pointer to copy. NULL if str = NUL.
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ch = (char *)malloc((sizeof(char) * length) + 1);
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		ch[i] = str[i];
	}
	ch[length] = '\0';
	return (ch);
}
