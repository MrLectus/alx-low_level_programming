#include "main.h"
#include <stdio.h>

/**
 * leet - to upper
 * @n: poniter 1
 *
 * Return: upper
 */

char *leet(char *n)
{
	int i, j;
	char v1[] = "aAeEoOtTlL";
	char v2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == v1[j])
			{
				n[i] = v2[j];
			}
		}
	}
	return (n);
}
