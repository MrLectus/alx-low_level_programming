#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: ---------
 * @argv: ---------
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc <= 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; ++i)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (1);
}
