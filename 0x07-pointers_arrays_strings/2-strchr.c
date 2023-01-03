#include "main.h"

/**
 * _strchr - Entry point
 * @s: param 1
 * @c: param 2
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ((char *)0);
}
