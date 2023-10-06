#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concantinates two strings
 * @s1: destination
 * @s2: source
 * @n: number of bytes of st to concant
 *
 * Return: Null if functin faills
 *			or ptr to new allocated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int counter1;
	unsigned int counter2;
	char *newpoint;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n >= l2)
		n = l2;
	newpoint = malloc(l1 + l2 + 1);
	if (newpoint == NULL)
		return (NULL);
	for (counter1 = 0; counter1 < l1; counter1++)
	{
		newpoint[counter1] = s1[counter1];
	}
	for (counter2 = 0; counter2 < n; counter2++)
	{
		newpoint[counter1 + counter2] = s2[counter2];
	}
	newpoint[counter1 + counter2] = '\0';
	return (newpoint);
}
