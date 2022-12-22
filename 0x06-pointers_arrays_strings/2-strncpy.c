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

	i = 0;

	while ((dest[i] = src[i]) && i <= n)
	{
		i++;
	}
	for (; i < n; ++i)
	{
		dest[i] = '\0';
	}
	return (dest);
}
