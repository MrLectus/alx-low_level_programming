#include "main.h"

/**
 * _puts - do stdout
 * @str: poniter 1
 *
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
