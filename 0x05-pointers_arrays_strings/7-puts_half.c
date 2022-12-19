#include "2-strlen.c"
#include "main.h"

/**
 * puts_half - put half stdout
 * @str: poniter 1
 *
 */

void puts_half(char *str)
{
	int length = _strlen(str) - 1;
	int i;

	for (i = length / 2 + 1; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
