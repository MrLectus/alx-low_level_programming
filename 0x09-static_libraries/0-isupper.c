#include "main.h"

/**
 * _isupper - Entry point
 * @c: param1
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
