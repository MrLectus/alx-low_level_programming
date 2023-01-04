#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Entry point
 * @s: param
 *
 * Return: Always 0 (Success)
 */

void _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		putchar(*s);
	}
}
