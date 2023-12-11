#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single digit numbers with putchar
 * Return: always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
		putchar(digit++);
	putchar('\n');
	return (0);
}
