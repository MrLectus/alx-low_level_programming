#include "2-strlen.c"
#include "main.h"

/**
 * puts2 - put stdout
 * @str: poniter 1
 *
 */

void puts2(char *str)
{
	int length = _strlen(str) - 1;
	int i;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
