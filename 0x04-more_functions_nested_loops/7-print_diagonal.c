#include "main.h"
/**
 *print_diagonal - prints the diagonal shape
 *@n: length of the diaghonal in number of times.
 */

void print_diagonal(int n)
{
	char di = '\\';
	int count;
	int spaceNo;
	char space = ' ';

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (spaceNo = 0; spaceNo < count; spaceNo++)
			{
				_putchar(space);
			}
			_putchar(di);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
