#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: ---------
 * @argv: ---------
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	bool check;

	sum = 0;

	if (argc <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; ++i)
		{
			size_t j;

			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (isdigit(argv[i][j]))
					check = true;
				else
				{
					check = false;
					break;
				}
			}
			if (check)
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
	}
	return (0);
}
