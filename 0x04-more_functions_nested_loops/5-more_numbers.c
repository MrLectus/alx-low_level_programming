#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int nums;
	char chars;

	for (nums = 0; nums < 10; nums++)
	{
		for (chars = 0; chars <= 14; chars++)
		{
			if (chars > 9)
				_putchar((chars / 10) + '0');
			_putchar((chars % 10) + '0');
		}
		_putchar('\n');
	}
}
