#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: locate last digit of random number
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
	printf(" is %d ", n % 10);
	if ((n % 10) > 5)
		printf("and is greater than %d\n", 5);
	else if ((n % 10) == 0)
		printf("and is %d\n", 0);
	else
		printf("and is less than %d and not %d\n", 6, 0);
	return (0);
}
