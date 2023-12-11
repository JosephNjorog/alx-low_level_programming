#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - select correct function to perform certain operation
 * @s: operator passed
 * Return: pointer to selected funtion
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <= 5)
	{
		if (ops[i].op && strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
