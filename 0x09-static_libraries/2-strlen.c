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
