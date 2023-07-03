#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the chess
 * @a: Variable to use the rows
 * 8: Variable use to make the columns
 * Return: void
 */
void printChessboard(char (*a)[8])
{
	int rows = 8;
    	
	int columns = 8;
	
	char chessboard[rows][columns];
	for (int i = 0; i < rows; i++)
	{
        for (int j = 0; j < columns; j++)
	}

	{
            if ((i + j) % 2 == 0)
                chessboard[i][j] = 'W';
            else
                chessboard[i][j] = 'B';
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c ", chessboard[i][j]);
        }
        printf("\n");
    }
}

