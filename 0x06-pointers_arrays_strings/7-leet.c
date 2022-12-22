#include "main.h"
#include <stdio.h>

/**
 * leet - to upper
 * @s: poniter 1
 *
 * Return: upper
 */

char *leet(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		else if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		else if (*p == 'i' || *p == 'I')
		{
			*p = '1';
		}
		else if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		else if (*p == 's' || *p == 'S')
		{
			*p = '5';
		}
		else
		{
			*p = (*p >= 'a' && *p <= 'z')
					 ? (*p - 'a' + 'A')
					 : *p;
		}
		p++;
	}
	return (s);
}
