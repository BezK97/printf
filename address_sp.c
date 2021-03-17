#include "holberton.h"

/**
 * format_p - Function that prints address
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_p(va_list arg, char *buffer, int *i)
{
	unsigned long int n;
	int x;
	char *hexvalues;
	char *hex;
	void *a;
	char *b;

	a = va_arg(arg, void *);
	b = "(nil)";
	if (a == NULL)
		for (x = 0; x < 5; x++, *i += 1)
			buffer[*i] = b[x];
	n = (unsigned long int)a;
	hexvalues = "0123456789abcdef";
	hex = malloc(14 * sizeof(char));

	for (x = 0; n != 0; x++)
	{
		hex[x] = hexvalues[n % 16];
		n /= 16;
	}
	x += 2;
	hex[13] = '0';
	hex[12] = 'x';
	for (x--; x >= 0; *i += 1, x--)
	{
		buffer[*i] = hex[x];
	}
}
