#include "main.h"

/**
 * str_concat - Concantinates two strings.
 * @s1: target sring pointer
 * @s2: source string pointer
 * Return: Null if new is null or new pointer adress if success
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int length1 = 0;
	int length2 = 0;
	char *new;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}

	new = (char *)malloc((sizeof(char) * (length1 + length2 + 1)));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		new[i + j] = s2[j];
	}
	new[i + j] = '\0';
	return (new);
}
