#include <stdio.h>

/**
 * main - print number of cmd args
 * @argc: numbe of cmd args
 * @argv: array of args
 * Return: o if success
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
