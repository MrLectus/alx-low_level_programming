#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 97; i < 123; ++i)
{
if ((char)i == 'q' || (char)i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
