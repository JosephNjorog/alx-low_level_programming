#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - main function.
 * @s1: function parameter 1.
 * @s2: function parameter 2.
 * @n: function parametr 3.
 * Return: concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 * n + 1));
	else
		s = malloc(sizeof(char) * (len2 * n + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	
}
