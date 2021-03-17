#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * format_d - Function that prints signed integer
 *
 * @arg: List of arguments
 * @buffer: array of string containing integer
 * @i: pointer to number of character
 */
void format_d(va_list arg, char *buffer, int *i)
{
	int x, j, numlen;
	char *num_str;

	x = va_arg(arg, int);

	numlen = num_len(x);
	if (x < 0)
	{
		numlen += 1;
	}
	num_str = malloc(numlen * sizeof(char));
	if (num_str == NULL)
		return;
	itos(num_str, x);
	for (x = *i, j = 0; j < numlen; *i += 1, x++, j++)
	{
		if (*i == 1024)
		{
			_putchar(buffer, i);
			reset_putchar(buffer);
			*i = 0;
		}
		buffer[*i] = num_str[j];
	}
	free(num_str);
}
