#include "main.h"

/**
 * _strlen - find length
 * @s: poniter 1
 *
 * Return: size
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

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
	return (dest);
}
