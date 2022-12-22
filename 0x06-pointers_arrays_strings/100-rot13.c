#include "main.h"

/**
 * rot13 - do rot13.
 * @s: The string
 *
 * Return: The string
 */
char *rot13(char *s)
{
	int i, j;
	char rot_string[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot_string[j];
				boolean = 1;
			}
		}
	}

	return (s);
}
