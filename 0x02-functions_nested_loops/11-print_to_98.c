#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check lower case letter
 * @x: param 1
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int x)
{
	if (x <= 98)
		for (x = x; x <= 97; x++)
			printf("%d, ", x);
	else
		for (x = x; x > 98; x--)
			printf("%d, ", x);

	printf("98\n");
}
