#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */

int main(void)
{
	int v1;

	for (v1 = 0; v1 < 99; v1++)
	{
		int v2;

		for (v2 = v1 + 1; v2 < 100; v2++)
		{
			putchar((v1 / 10) + '0');
			putchar((v1 % 10) + '0');
			putchar(' ');
			putchar((v2 / 10) + '0');
			putchar((v2 % 10) + '0');

			if (v1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
