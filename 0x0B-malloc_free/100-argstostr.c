#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Entry point
 * @ac : param
 * @av : param
 *
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	char *v1;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	v1 = malloc((c + 1) * sizeof(char));

	if (v1 == NULL)
	{
		free(v1);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			v1[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			v1[k] = av[i][j];
	}
	v1[k] = '\0';

	return (v1);
}
