#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Entry point
 * @n: param
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	int guess;
	guess = n / 2;

	if (guess * guess == n)
	{
		return guess;
	}

	int new_guess;
	new_guess = (_sqrt_recursion(n - guess * guess) + guess) / 2;

	if (new_guess == guess)
	{
		return guess;
	}
	else
	{
		return new_guess;
	}
}

int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
