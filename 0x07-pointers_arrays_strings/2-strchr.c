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

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			s = (s + 1);
		}
	}
	return (NULL);
}
