#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Print lower case letter
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
