#include <stdio.h>

/**
 * main - output all single number of base 10
 *
 * Return: 0 if successful
 */

int main(void)
{
	int v1;

	for (v1 = 0; v1 < 8; v1++)
	{
		int v2;

		for (v2 = v1 + 1; v2 < 9; v2++)
		{
			int v3;

			for (v3 = v2 + 1; v3 < 10; v3++)
			{
				putchar((v1 % 10) + '0');
				putchar((v2 % 10) + '0');
				putchar((v3 % 10) + '0');

				if (v1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}

	putchar('\n');

	return (0);
}
