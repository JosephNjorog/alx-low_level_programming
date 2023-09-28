#include "main.h"

/**
 * is_prime_number - checks if int is prime candidate.
 * @n: intager subject.
 * Return: 1 if prime. 0 if not.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, 2));
	}
}

/**
 * prime_checker - cheks for primes.
 * @n: int subject.
 * @rand: random divisor.
 * Return: 1 if prime, 0 if not, recursion
*/

int prime_checker(int n, int rand)
{
	if (rand * rand > n)
	{
		return (1);
	}
	else if (n % rand == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, rand + 1));
	}
}
