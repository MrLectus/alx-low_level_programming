#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print lower case letter x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i < 123; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
