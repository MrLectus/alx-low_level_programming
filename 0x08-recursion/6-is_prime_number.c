#include "main.h"
#include <stdio.h>

/**
 * is_prime - Entry point
 * @n: param
 * @divisor: param
 *
 * Return: Always 0 (Success)
 */

int is_prime(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime(n, divisor + 2));
}

/**
 * is_prime_number - Entry point
 * @n: param
 *
 * Return: Always 0 (Success)
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}

	return (is_prime(n, 3));
}
