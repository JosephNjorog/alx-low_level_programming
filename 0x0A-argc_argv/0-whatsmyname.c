#include <stdio.h>

/**
 * main - prints its name
 * @argv: aray of  strings in cmd line.
 * @argc: number of cmd args
 * Return: 0 if success
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
