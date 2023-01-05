#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Entry point
 * @s1: param
 * @s2: param
 *
 * Return: Always 0 (Success)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '\0' || *s1 != *s2)
	{
		return (0);
	}

	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
