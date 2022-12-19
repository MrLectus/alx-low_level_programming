#include "2-strlen.c"
#include "main.h"

/**
 * print_rev - do stdout
 * @str: poniter 1
 *
 */

void print_rev(char *str)
{
	int index = _strlen(str);

	while (str[index] >= 0)
	{
		_putchar(str[index]);
		index--;
	}
	_putchar('\n');
}
