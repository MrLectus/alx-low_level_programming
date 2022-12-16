#include "main.h"
#include <stdio.h>
#include "_putchar.c"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	for (int i = 48; i <= 57; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
