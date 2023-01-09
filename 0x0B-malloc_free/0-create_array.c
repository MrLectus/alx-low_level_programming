#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size : param
 * @c : param
 *
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *v1 = malloc(size);
	size_t i;
	i = 0;

	for (i = 0; i < size; ++i)
	{
		v1[i] = c;
	}
	return v1;
}
