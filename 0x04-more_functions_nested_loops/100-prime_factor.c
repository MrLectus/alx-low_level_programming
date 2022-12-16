#include <stdio.h>

/**
 * main - do prime
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	long int v1 = 612852475143;
	long int prime = 2;

	while (v1 > 1)
	{
		if (v1 % prime == 0)
			v1 /= prime;
		else
			prime++;
	}
	printf("%ld\n", prime);
	return (0);
}
