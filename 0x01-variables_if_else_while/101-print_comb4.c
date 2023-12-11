#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits
 * Return: always 0 (Success)
 */
int main(void)
{
	int letter_1, letter_2, letter_3;

	letter_1 = '0';
	while (letter_1 < '8')
	{
		letter_2 = letter_1 + 1;
		while (letter_2 < '9')
		{
			letter_3 = letter_2 + 1;
			while (letter_3 <= '9')
			{
				putchar(letter_1);
				putchar(letter_2);
				putchar(letter_3);
				if (letter_1 != '7' || letter_2 != '8' || letter_3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				letter_3++;
			}
			letter_2++;
		}
		letter_1++;
	}
	putchar('\n');
	return (0);
}
