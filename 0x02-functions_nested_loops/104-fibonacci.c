#include <stddef.h>
#include <stdio.h>

/**
 * fibbonaci - Find fibbonaci
 * @nums: number
 *
 * Return: Always 0 (Success)
 */

size_t fibbonaci(size_t nums)
{
	size_t a = 0, b = 1, c, i;

	if (nums == 0)
		return (a);
	for (i = 2; i <= nums; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 99)
		{
			printf("%lu, ", b);
		}
		else
		{

			printf("%lu", b);
		}
	}
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
	return (b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibbonaci(99);
    printf("\n");
	return (0);
}
