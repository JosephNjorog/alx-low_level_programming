#include "main.h"
/**
 *print_square - Prints a square pattern.
 *@size: dimensions of square.
 */

void print_square(int size)
{
	char block = '#';
	int blockNo;
	int count;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (blockNo = 0; blockNo < size; blockNo++)
			{
				_putchar(block);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
