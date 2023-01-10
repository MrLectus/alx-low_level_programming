#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 * @st1 : param
 * @st2 : param
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	size_t i, j, k, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	end = j;
	for (j = 0; j <= end; k++, j++)
		str[k] = s2[j];

	return (str);
}
