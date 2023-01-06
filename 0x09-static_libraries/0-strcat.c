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

	i = 0;

	while ((dest[i++] = src[j++]) != '\0')
		;
	return (dest);
}
