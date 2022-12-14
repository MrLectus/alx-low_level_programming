#include <stdio.h>

/**
 * main - find sum of multiples of 3 and 5 less than 1024
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	int v1, sum = 0;

	for (v1 = 3; v1 < 1024; v1++)
	{
		if (v1 % 3 == 0 || v1 % 5 == 0)
			sum += v1;
	}
	printf("%d\n", sum);
	return (0);
}
