#include "main.h"
#include <stdio.h>

/**
 * times_table - check lower case letter
 *
 * Return: Always 0 (Success)
 */

void times_table()
{
	for (int i = 0; i <= 9; ++i)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("%3d", i * j);
			}
			else
			{
				printf("%3d,", i * j);
			}
		}
		printf("\n");
	}
}
