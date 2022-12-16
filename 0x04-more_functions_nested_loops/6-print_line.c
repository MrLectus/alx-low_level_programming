#include "main.h"

/**
 * print_line - Entry point
 * @n: param 1
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int i;

	for (i = 1; i <= n; ++i)
	{
		_putchar(95);
	}
}
