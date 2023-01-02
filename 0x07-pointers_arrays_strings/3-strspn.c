#include "2-strchr.c"
#include "main.h"

/**
 * _strspn - Entry point
 * @s: param 1
 * @accept: param 2
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;

	int count = 0;

	if (s == NULL | accept == NULL)
	{
		return (0);
	}

	while (s[i] != '\0' && _strchr(accept, *s++))
	{
		count++;
	}
	return (count);
}
