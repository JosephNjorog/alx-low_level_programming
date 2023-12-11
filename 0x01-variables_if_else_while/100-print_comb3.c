#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter_1 = '0', letter_2;

	while (letter_1 < '9')
	{
		letter_2 = letter_1 + 1;
		while (letter_2 <= '9')
		{
			putchar(letter_1);
			putchar(letter_2);
			if (letter_1 != '8' || letter_2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			letter_2++;
		}
		letter_1++;
	}
	putchar('\n');
	return (0);
}
