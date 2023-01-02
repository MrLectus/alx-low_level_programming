#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Entry point
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	long long i;

	for (i = 0; i < n; ++i)
	{
		src[i] = dest[i];
	}
	return (dest);
}
