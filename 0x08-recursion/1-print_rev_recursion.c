#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Entry point
 * @s: param
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
