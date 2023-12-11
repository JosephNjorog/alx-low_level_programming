#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digits of base 10
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
		printf("%d", n++);
	putchar('\n');
	return (0);
}
