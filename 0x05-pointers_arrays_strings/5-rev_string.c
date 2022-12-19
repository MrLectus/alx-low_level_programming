#include "2-strlen.c"
#include "main.h"

/**
 * swap_char - swap stdout
 * @a: poniter 1
 * @b: poniter 2
 *
 */

void swap_char(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * rev_string - rev stdout
 * @str: poniter 1
 *
 */

void rev_string(char *str)
{
	int begin = 0;
	int end = _strlen(str) - 1;

	while (begin <= end)
	{
		swap_char(&str[begin], &str[end]);
		begin++;
		end--;
	}
}
