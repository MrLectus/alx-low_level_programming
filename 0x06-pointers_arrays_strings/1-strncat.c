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
	dest[i + 1] = '\0';
	return (dest);
}
