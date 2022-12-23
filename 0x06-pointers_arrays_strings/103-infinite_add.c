#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
 * _strlen - find length
 * @s: poniter 1
 *
 * Return: size
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * infinite_add - add infinite
 * @n1: poniter 1
 * @n2: poniter 2
 * @r: poniter 3
 * @size_r: value 1
 *
 * Return: upper
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int len = MAX(len1, len2);

	if (size_r < len + 2)
	{
		return (0);
	}

	int carry = 0;

	for (int i = 1; i <= len; i++)
	{
		int d1 = i <= len1 ? n1[len1 - i] - '0' : 0;
		int d2 = i <= len2 ? n2[len2 - i] - '0' : 0;
		int s = d1 + d2 + carry;

		r[len + 1 - i] = (s % 10) + '0';
		carry = s / 10;
	}
	if (carry)
	{
		r[0] = '1';
		return (r);
	}
	else
	{
		return (r + 1);
	}
}
