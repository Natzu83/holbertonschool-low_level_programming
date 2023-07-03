#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the chess
 * @a: Variable to use the rows
 * 8: Variable use to make the columns
 * Return: always 0
 */
void printChessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++j)
	{
		for (j = 0; j < 8, ++i)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
