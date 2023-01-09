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
	char *v1 = malloc(sizeof(str));
	size_t n = 0;

	if (v1 == NULL || strlen(str) > sizeof(str))
	{
		return (NULL);
	}
	while (*str)
	{
		v1[n] = *str;
		str = str + 1;
		n++;
	}
	return (v1);
}
