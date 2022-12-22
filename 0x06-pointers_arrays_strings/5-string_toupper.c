#include "main.h"

/**
 * string_toupper - to upper
 * @v1: poniter 1
 *
 * Return: upper
 */

char *string_toupper(char *v1)
{
	int i;

	for (i = 0; v1[i] != '\0'; ++i)
	{
		if (v1[i] >= 97 && v1[i] <= 122)
		{
			v1[i] = v1[i] - 32;
		}
	}
	return (v1);
}
