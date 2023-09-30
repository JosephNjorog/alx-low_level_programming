#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_number(char *s);

/**
 * main - print number of command arguments
 * @argc: number of command arguments
 * @argv: array of command arguments
 *
 * Description: checks if each strung of args is a number
 * -gets the sum of the arguments that are numbers
 * Return: o if success
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_positive_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * is_positive_number - checks if a number id positive
 * @s: pointer to a string
 * Return: 0 is false and  1 if true
*/

int is_positive_number(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
