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
	int i;

	if (x <= 98)
	{
		for (i = x; i <= 98; ++i)
		{
			if (i == 98)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	} else {
		for (i = x; i >= 98; --i)
		{
			if (i == 98)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
    }
}
int main(void)
{
	print_to_98(0);
}
