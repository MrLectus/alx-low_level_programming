#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: param 1
 **/

void print_diagonal(int n)
{
	int first, second;

	for (second = 1; second <= n; second++)
	{
		for (first = 1; first < second; first++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
