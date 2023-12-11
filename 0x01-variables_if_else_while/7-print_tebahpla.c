#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabet in reverse
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
