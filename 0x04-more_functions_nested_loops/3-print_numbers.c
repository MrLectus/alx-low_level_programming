#include "_putchar.c"
#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
