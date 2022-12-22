#include "main.h"
#include <stdio.h>

/**
 * leet - to upper
 * @v1: poniter 1
 *
 * Return: upper
 */

char *leet(char *v1)
{
	int i = 0;

	while (v1[i] != '\0')
	{
		if (v1[i] == 'a' || v1[i] == 'A')
		{
			v1[i] = 52;
		}
		else if (v1[i] == 'e' || v1[i] == 'E')
		{
			v1[i] = 51;
		}
		else if (v1[i] == 'o' || v1[i] == 'O')
		{
			v1[i] = 48;
		}
		else if (v1[i] == 't' || v1[i] == 'T')
		{
			v1[i] = 55;
		}
		else if (v1[i] == 'l' || v1[i] == 'L')
		{
			v1[i] = 49;
		}
		i++;
	}

	return (v1);
}
