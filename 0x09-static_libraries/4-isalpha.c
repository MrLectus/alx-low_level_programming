#include "main.h"

/**
 * _isalpha - check lower case letter
 * @c: character
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
