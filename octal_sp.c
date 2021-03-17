#include "holberton.h"

/**
 * format_o - Function that prints octal value
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_o(va_list arg, char *buffer, int *i)
{
	unsigned int n;
	int x;
	char *octvalues;
	char *oct;

	n = va_arg(arg, int);
	octvalues = "0123456789ABCDEF";

	oct = malloc(12 * sizeof(char));
	if (oct == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		oct[x] = octvalues[n % 8];
		n /= 8;
	}
	for (x--; x >= 0; *i += 1, x--)
	{
		buffer[*i] = oct[x];
	}
	free(oct);
}
