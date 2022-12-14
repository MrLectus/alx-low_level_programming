#include "main.h"

/**
 * print - function to print recursively using _putchar
 * @var: variable to be printed
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 *
 */

void print_times_table(int n)
{
	int v1, v2, v3;

	if (n < 0 || n > 15)
		return;
	for (v1 = 0; v1 <= n; v1++)
	{
		for (v2 = 0; v2 <= n; v2++)
		{
			v3 = v1 * v2;
			if (v2 == 0)
				_putchar('0' + v3);
			else if (v3 < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + v3);
			}
			else if (v3 < 100)
			{
				_putchar(' ');
				print(v3);
			}
				else
			{
				print(v3);
			}
			if (v2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
