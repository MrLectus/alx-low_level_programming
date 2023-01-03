#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: param 1
 * @size: param 2
 *
 */

void print_diagsums(int *a, int size)
{
	int sumX = 0;
	int sumY = 0;

	int i, j;

	i = j = 0;

	for (i = 0; i < size; i++)
	{
		sumX += *((int *)a + i * size + i);
		;
		sumY += *((int *)a + i * size + (size - 1 - i));
		;
	}

	printf("%d, %d\n", sumX, sumY);
}
