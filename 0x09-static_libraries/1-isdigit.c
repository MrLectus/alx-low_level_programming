#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: param1
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
