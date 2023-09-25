#include "main.h"

/**
 * print_diagsums - print sum of 2 diagonals of int matrix.
 * @a: pointer to matrix.
 * @size: size of 2d square.
*/

void print_diagsums(int *a, int size)
{
	int *point = a;
	int leftSum = 0;
	int rightSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		leftSum += point[i * size + i];
		rightSum += point[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", leftSum, rightSum);
}
