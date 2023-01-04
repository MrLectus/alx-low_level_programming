#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Entry point
 * @s: param
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count += _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
