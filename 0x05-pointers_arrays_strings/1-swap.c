#include <stdio.h>
#include "main.h"

/**
 * swap_int - do prime
 * @a - pointer 1
 * @b - poniter 2
 *
 * Return: 0 if successful
 *
 */

void swap_int(int *a, int *b)
{
	int *temp = a;
	*a = *b;
	*b = *temp;
}
