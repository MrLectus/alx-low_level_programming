#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int do_rand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		do_rand = (rand() % 125) + 1;
		printf("%c", do_rand);
		total -= do_rand;
	}
	printf("%c", total);

	return (0);
}
