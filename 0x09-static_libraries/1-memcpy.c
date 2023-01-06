#include "main.h"

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
	char *dest_copy = dest;

	while (n--)
	{
		*dest_copy++ = *src++;
	}
	return (dest);
}
