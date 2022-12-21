#include "../0x05-pointers_arrays_strings/2-strlen.c"
#include "main.h"

/**
 * _strcat - concat string
 * @dest: poniter 1
 * @src: poniter 1
 *
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	j = 0;
	i = _strlen(dest);
	while ((dest[i++] = src[j++]) != '\0')
		;
	return dest;
}
