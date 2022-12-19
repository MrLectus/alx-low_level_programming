#include "main.h"
#include <stdio.h>

/**
 * print_array - print stdout
 * @a: poniter 1
 * @n: poniter 2
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
		else
		{
			continue;
		}
		printf(" ");
	}
}
