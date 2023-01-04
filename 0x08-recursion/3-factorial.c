#include "main.h"
#include <stdio.h>
/**
 * factorial - Entry point
 * @n: param
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
