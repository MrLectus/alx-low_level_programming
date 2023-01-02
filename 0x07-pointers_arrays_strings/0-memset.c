#include "main.h"

/**
 * _memset - Entry point
 * @s: param 1
 * @b: param 2
 * @n: param 3
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	long long i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
