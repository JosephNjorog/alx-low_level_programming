#include "main.h"

/**
 * argstostr - concantinates all args of a program
 * @ac: argc
 * @av: argv
 * Return: pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	int count;
	int post;
	int len = 0, len2 = 0, lenTotal = 0;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < ac; count++)
	{
		for (len = 0; av[count][len] != '\0'; len++)
		{
			lenTotal++;
		}
		lenTotal++;
	}

	args = (char *)malloc(lenTotal + 1);

	if (args == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		while (av[count][len2] != '\0')
		{
			args[post] = av[count][len2];
			post++;
			len2++;
		}
			args[post] = '\n';
			post++;
	}
	args[post] = '\0';
	return (args);
}
