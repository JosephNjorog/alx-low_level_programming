#include "main.h"

/**
  *_strncat - This concatenates two strings with n bytes
  *@dest: It copys to
  *@src: It copy's from
  *@n: The number of character to be copied
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
