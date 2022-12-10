#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int v1;

		for (v1 = i + 1; v1 < 10; v1++)
		{
			putchar((i % 10) + '0');
			putchar((v1 % 10) + '0');

			if (i != 8)
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
