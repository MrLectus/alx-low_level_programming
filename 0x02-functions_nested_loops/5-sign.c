#include "main.h"
#include <stdio.h>

/**
 * print_sign - check lower case letter
 * @c: character
 * Return: Always 0 (Success)
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(48);
		return 1;
	}
	else if (c == 0)
	{
		_putchar(43);
		return 0;
	}
	else
	{
		_putchar(45);
		return -1;
	}
}
