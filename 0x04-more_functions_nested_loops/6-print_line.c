#include "main.h"
/**
 *print_line - prints a line.
 *@n: argument stating the number of lines.
 */

void print_line(int n)
{
	int lineNumb = 0;
	char line = '_';

	if (n > lineNumb)
	{
		for (lineNumb = 0; lineNumb < n; lineNumb++)
		{
			_putchar(line);
		}
	}
	_putchar('\n');
}
