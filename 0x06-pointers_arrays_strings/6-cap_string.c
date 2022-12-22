#include "main.h"
#include <ctype.h>
#include "./5-string_toupper.c"

/**
 * cap_string - to upper
 * @s: poniter 1
 *
 * Return - upper
 */

char *cap_string(char *s)
{
	char *p = s;
	int prev_was_sep = 1;
	while (*p)
	{
		if (prev_was_sep)
		{
			*p = *string_toupper(p);
		}

		prev_was_sep = isspace((unsigned char)*p) || *p == ',' || *p == ';' ||
					   *p == '.' || *p == '!' || *p == '?' || *p == '"' ||
					   *p == '(' || *p == ')' || *p == '{' || *p == '}';
		p++;
	}
	return (s);
}
