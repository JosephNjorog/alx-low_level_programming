#include "3-calc.h"

/**
 * main - initiates calculator
 * @argc: number of arguments
 * @argv: arguments
 * Return: value after evaluation
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *sign;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);

	if (((*sign == '/') && (num2 == 0)) || ((*sign == '%') && (num2 == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	fun = get_op_func(sign);

	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fun(num1, num2));
	return (0);
}
