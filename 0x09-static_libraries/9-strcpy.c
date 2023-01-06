#include "main.h"

/**
 * _strcpy - print stdout
 * @dest: pointer 1
 * @src: pointer 2
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int dest_len = 0;

	for (i = 0; i < dest_len; ++i)
	{
		dest[i] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
