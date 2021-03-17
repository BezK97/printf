#include "holberton.h"

/**
 * format_str - Function that prints string
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_str(va_list arg, char *buffer, int *i)
{
	int n, j;
	char *s;

	s = va_arg(arg, char*);

	for (n = *i, j = 0; s[j] != '\0';  *i += 1, n++, j++)
	{
		if (*i == 1024)
		{
			_putchar(buffer, i);
			reset_putchar(buffer);
			*i = 0;
		}
		buffer[*i] = s[j];
	}
}

/**
 * format_c - Function that prints character
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_c(va_list arg, char *buffer, int *i)
{
	char s;

	s = va_arg(arg, int);
	if (*i == 1024)
	{
		_putchar(buffer, i);
		reset_putchar(buffer);
		*i = 0;
	}
	buffer[*i] = s;
	*i += 1;
}
