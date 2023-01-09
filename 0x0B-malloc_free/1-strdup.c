#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * @str : param
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *v1;
	size_t n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		v1 = malloc(sizeof(char*) + sizeof(*str));
		while (*str != '\0')
		{
			v1[n] = *str;
			str = str + 1;
			n++;
		}
	}
	return (v1);
}
