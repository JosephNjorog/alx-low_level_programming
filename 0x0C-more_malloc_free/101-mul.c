#include "main.h"

int _isdigit(char *str);
void _print_result(int *result, int size);
int _strlen(char *str);
void _multiply(char *num1, char *num2);

/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: arguments array.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	_multiply(argv[1], argv[2]);

	return (0);
}

/**
 * _isdigit - chaecks if number is +ve digit
 * @str: string of chars.
 *
 * Return: 1 if true,  0 if false
*/

int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - finds string length
 * @str: string pointer.
 *
 * Return: length of a string.
*/

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _multiply - multiplies the number arguments
 * @num1: pointer to array of arg one if number
 * @num2: pointer to arrey of arg two if number
*/

void _multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result;
	int i, j, carry;
	int product;
	int sum;

	result = malloc(sizeof(int) * (len1 + len2));

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = product + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	_print_result(result, len1 + len2);

	free(result);
}

/**
 * _print_result - Prints the result.
 * @result: result of the multiplication
 * @size: the size of the result.
*/

void _print_result(int *result, int size)
{
	int i = 0;

	while (i < size - 1 && result[i] == 0)
		i++;

	if (i == size)
		_putchar('0');
	else
	{
		while (i < size)
		{
			_putchar(result[i] + '0');
			i++;
		}
	}
	_putchar('\n');
}
