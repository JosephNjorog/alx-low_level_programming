#include "main.h"
/**
 *main - Starting point.
 *Return: 0 when successful.
 */

int main(void)
{
	int count;

	for (count = 1; count < 100; count++)
	{

		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("Buzz\n");

	return (0);
}
