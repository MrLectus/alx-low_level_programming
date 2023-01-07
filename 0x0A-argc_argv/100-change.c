#include <stdio.h>
#include <stdlib.h>

/**
 * foo - Entry point
 * @coin: ---------
 *
 * Return: Always 0 (Success)
 */

int foo(int coin)
{
	int count;

	count = 0;

	while (coin)
	{
		if (coin >= 25)
		{
			coin -= 25;
			count++;
		}
		else if (coin >= 10)
		{
			coin -= 10;
			count++;
		}
		else if (coin >= 5)
		{
			coin -= 5;
			count++;
		}
		else if (coin >= 2)
		{
			coin -= 2;
			count++;
		}
		else if (coin >= 1)
		{
			coin -= 1;
			count++;
		}
	}
	return (count);
}
/**
 * main - Entry point
 * @argc: ---------
 * @argv: ---------
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int coin = atoi(argv[1]);

		count = foo(coin);
	}
	printf("%d\n", count);
	return (0);
}
