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
	if (argc >= 3)
	{
		int y = atoi(argv[2]);
		int x = atoi(argv[1]);

		printf("%d", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
