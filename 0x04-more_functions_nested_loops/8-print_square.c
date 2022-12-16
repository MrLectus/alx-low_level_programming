#include "main.h"

/**
 * print_square - print a square of input size
 * @size: demensions of square
 * Return: nothing
 **/

void print_square(int size)
{
	int left, right;

	for (right = 0; right < size; right++)
	{
		for (left = 0; left < size; left++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
