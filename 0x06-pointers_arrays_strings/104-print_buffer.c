#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_buffer - print buffer
 * @b: value 1
 * @size: value 2
 *
 */

void print_buffer(char *b, int size)
{
	for (int i = 0; i < size; ++i)
	{

		printf("%x ", b[i]);
		if ((i + 1) % 10 == 0)
		{
			putchar('\n');
		}
	}
}

int main()
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer "
					":)\1\2\3\4\5\6\7#"
					"cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34"
					"\x56#pointersarefun #infernumisfun\n";
	printf("%s\n", buffer);
	print_buffer(buffer, sizeof(buffer));
}
