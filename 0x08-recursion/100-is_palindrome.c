#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * check_palindrome - Entry point
 * @s: param
 * @n: param
 *
 * Return: Always 0 (Success)
 */

int check_palindrome(char *s, int n)
{
	if (n <= 1)
	{
		return (1);
	}

	if (s[0] != s[n - 1])
	{
		return (0);
	}
	return (check_palindrome(s + 1, n - 2));
}

/**
 * is_palindrome - Entry point
 * @s: param
 *
 * Return: Always 0 (Success)
 */

int is_palindrome(char *s)
{
	return (check_palindrome(s, strlen(s)));
}
