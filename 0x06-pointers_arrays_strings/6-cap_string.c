#include "./5-string_toupper.c"
#include "main.h"
#include <ctype.h>

/**
 * cap_string - to upper
 * @s: poniter 1
 *
 * Return: upper
 */

char *cap_string(char *s)
{
	char *p = s;
	int prev_was_sep = 1;

	while (*p)
	{
		if (prev_was_sep)
		{
			if (*p >= 'a' && *p <= 'z')
			{
				*p = *p - 'a' + 'A';
			}
		}
		prev_was_sep = (*p == ' ') || (*p == '\t') || (*p == '\n') ||
					   (*p == ',') || (*p == ';') || (*p == '.') ||
					   (*p == '!') || (*p == '?') || (*p == '"') ||
					   (*p == '(') || (*p == ')') || (*p == '{') || (*p == '}');
		p++;
	}
	return (s);
}
