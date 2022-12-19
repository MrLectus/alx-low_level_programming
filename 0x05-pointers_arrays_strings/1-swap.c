#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap numbers
 * @a : pointer 1
 * @b : poniter 2
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
