#include "2-strlen.c"
#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print stdout
 * @dest: poniter 1
 * @src: poniter 2
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	int dest_len = _strlen(src);
	for (i = 0; i < dest_len; ++i)
	{
		dest[i] = src[i];
	}
	return dest;
}
