#include "main.h"
/**
 * print_triangle - triangle
 * @size: param1
 */
void print_triangle(int size)
{
	int row, column, v1;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (v1 = row + column; v1 >= 1; v1--)
			_putchar('#');
		_putchar('\n');
	}
}
