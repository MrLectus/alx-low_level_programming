#include "../0x05-pointers_arrays_strings/2-strlen.c"
#include "main.h"

/**
 * _strncat - concat string
 * @dest: poniter 1
 * @src: poniter 2
 * @n: value1
 *
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = _strlen(dest);
	j = 0;

	while ((dest[i++] = src[j++]) && n >= i)
		;
	return (dest);
}
