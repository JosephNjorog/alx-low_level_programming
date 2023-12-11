#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers of base 16
 * Return: always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
		putchar(digit++);
	digit = 'a';
	while (digit <= 'f')
		putchar(digit++);
	putchar('\n');
	return (0);
}
