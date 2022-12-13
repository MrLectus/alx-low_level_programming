#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - check lower case letter
 *
 * Return: Always 0 (Success)
 */

void jack_bauer()
{
	for (int i = 0; i <= 23; ++i)
	{
		for (int j = 0; j <= 59; j++)
		{
			printf("%02d:%02d\n", i, j);
		}
	}
}
