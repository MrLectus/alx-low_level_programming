#include <stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int v1 = 1, result, v2 = 2, last = 50;
	int ii;

	printf("%lu, %lu, ", v1, v2);
	for (ii = 2; ii < last; ii++)
	{
		result = v1 + v2;
		v1 = v2;
		v2 = result;
		printf("%lu", result);
		if (ii != last - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
