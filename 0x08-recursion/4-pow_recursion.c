#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Entry point
 * @x: param
 * @y: param
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 1)
	{
		return (1);
	}
	else
		return (_pow_recursion(x, y - 1) * x);
}
