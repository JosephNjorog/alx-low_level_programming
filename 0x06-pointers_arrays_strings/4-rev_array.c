#include "main.h"

/**
 * reverse_array - reverses aray of intagers.
 * @a: array to verese.
 * @n: the number of ellements to reverse
*/

void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;



	for (start = 0, end = n - 1; start < end; start++, end--)
	{
		temp = a[start];
		a[start] =  a[end];
		a[end] = temp;
	}
}
