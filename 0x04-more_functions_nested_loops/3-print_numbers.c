#include "_putchar.c"
#include "main.h"
/**
 * print_numbers - Entry point
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
