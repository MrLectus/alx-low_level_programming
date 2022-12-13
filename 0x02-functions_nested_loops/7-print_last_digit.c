#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - check lower case letter
 * @v1: character
 * Return: Always 0 (Success)
 */

int print_last_digit(int v1)
{
	v1 = v1 % 10;

	if (v1 < 0)
		v1 = -v1;

	_putchar(v1 + '0');
	return (v1);
}
