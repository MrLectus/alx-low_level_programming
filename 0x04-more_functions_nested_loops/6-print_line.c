#include "main.h"

/**
 * print_line - Entry point
 * @n: param 1
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	char x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
