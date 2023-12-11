#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calulate sum of two integers
 * @a: first integer
 * @b: second intger
 * Return: (a + b) (int)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of two integers
 * @a: first integer
 * @b: second intger
 * Return: (a - b) (int)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate product of two integers
 * @a: first integer
 * @b: second intger
 * Return: (a * b) (int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate division of two integers
 * @a: first integer
 * @b: second integer
 * Return: (a / b) (int)
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculate remainder of division of two integers
 * @a: first integer
 * @b: second integer
 * Return: (a % b) (int)
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
