# include "main.h"

/**
 * print_chessboard - prints a chess board.
 * @a: array of elemnts
*/

void print_chessboard(char (*a)[8])
{
	int row;
	int coll;

	for (row = 0; row < 8; row++)
	{
		for (coll = 0; coll < 8; coll++)
		{
			_putchar(a[row][coll]);
		}
		_putchar('\n');
	}
}
