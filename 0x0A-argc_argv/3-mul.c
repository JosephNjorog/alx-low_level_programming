#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of cmd args
 * @argc: numbe of cmd args
 * @argv: array of args
 * Return: o if success
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
