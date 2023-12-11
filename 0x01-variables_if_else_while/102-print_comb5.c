#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print four digit combinations
 * Return: always 0 (Success)
 */
int main(void)
{
	int l1, l2, l3, l4, i;

	l1 = '0';
	while (l1 <= '9')
	{
		l2 = '0';
		while (l2 <= '9')
		{
			l3 = l1, i = 1;
			while (l3 <= '9')
			{
				if (i)
					l4 = l2 + 1, i = 0;
				else
					l4 = '0';
				while (l4 <= '9')
				{
					putchar(l1);
					putchar(l2);
					putchar(' ');
					putchar(l3);
					putchar(l4);
					if (l1 != '9' || l2 != '8' || l3 != '9' || l4 != '9')
						putchar(','), putchar(' ');
					l4++;
				}
				l3++;
			}
			l2++;
		}
		l1++;
	}
	putchar('\n');
	return (0);
}
