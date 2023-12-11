#include <stdio.h>

/**
 * main - entry point
 *
 * Description: display alphabets
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	letter = 'A';
	while (letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
