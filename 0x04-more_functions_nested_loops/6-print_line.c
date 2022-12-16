#include "_putchar.c"
#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point
 * @n: param 1
 * Return: Always 0 (Success)
 */

void print_line(int n)
{

	int i;

	for (i = 1; i <= n; ++i)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}

int main()
{
	print_line(2);
}
