#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print combinations of single digits
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		if (letter++ != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
