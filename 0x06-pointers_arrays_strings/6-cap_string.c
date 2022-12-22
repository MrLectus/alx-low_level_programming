#include "main.h"
#include <ctype.h>

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
			*p = toupper((unsigned char)*p);
		}

		prev_was_sep = isspace((unsigned char)*p) || *p == ',' || *p == ';' ||
					   *p == '.' || *p == '!' || *p == '?' || *p == '"' ||
					   *p == '(' || *p == ')' || *p == '{' || *p == '}';
		p++;
	}
	return (s);
}
