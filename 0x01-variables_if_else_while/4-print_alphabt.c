#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display lowercase alphabet exept q and e
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
