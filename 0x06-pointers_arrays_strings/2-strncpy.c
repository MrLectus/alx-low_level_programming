#include "main.h"

/**
 * _strncpy - copy string
 * @dest: poniter 1
 * @src: poniter 2
 * @n: value 1
 *
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
