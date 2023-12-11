#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform simple operations on two numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | anything else (Failure)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]), b = atoi(argv[3]);
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
