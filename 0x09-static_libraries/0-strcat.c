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
	return (dest);
}
