#include "2-strchr.c"
#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: param 1
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	i = j = 0;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
