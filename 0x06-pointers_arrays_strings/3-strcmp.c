#include "main.h"

/**
 * _strcmp - copy string
 * @s1: poniter 1
 * @s2: poniter 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; ++i)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
