#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min amount needed for money change
 * @argc: number of args.
 * @argv: array of arguments.
 * Return: 1 if false, 0 if true.
*/

int main(int argc, char **argv)
{
	int cents, count, i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		int coin_value = coins[i];

		while (cents >= coin_value)
		{
			cents -= coin_value;
			count++;
		}
	}

	printf("%d\n", count);
	return (0);
}
