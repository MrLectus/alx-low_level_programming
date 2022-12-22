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
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
