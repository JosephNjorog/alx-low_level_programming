#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of int.
 * @n: intager subject.
 * Return: natuarl square root of int.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (actual_sqrt(n, 1));
	}
}

/**
 * actual_sqrt - finds the actual square root.
 * @n: int subject.
 * @rand: random nuber to evaluate from.
 * Return: returns a natuaral sqrt of n.
*/

int actual_sqrt(int n, int rand)
{
	if (rand * rand == n)
	{
		return (rand);
	}
	else if (rand * rand > n)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt(n, rand + 1));
	}
}
