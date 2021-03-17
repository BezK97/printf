#include "holberton.h"

/**
 * format_x - Function that prints hexadecimal
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_x(va_list arg, char *buffer, int *i)
{
	unsigned int n;
	int x;
	char *hexvalues;
	char *hex;

	n = va_arg(arg, int);
	hexvalues = "0123456789abcdef";
	hex = malloc(9 * sizeof(char));
	if (hex == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		hex[x] = hexvalues[n % 16];
		n /= 16;
	}
	for (x--; x >= 0; *i += 1, x--)
	{
		buffer[*i] = hex[x];
	}
	free(hex);
}

/**
 * format_X - Function that prints hexadecimal
 *
 * @arg: list of argument
 * @buffer: array that stores string
 * @i: pointer to number of character
 */
void format_X(va_list arg, char *buffer, int *i)
{
	unsigned int n;
	int x;
	char *hexvalues;
	char *hex;

	n = va_arg(arg, int);
	hexvalues = "0123456789ABCDEF";
	hex = malloc(9 * sizeof(char));
	if (hex == NULL)
		return;
	for (x = 0; n != 0; x++)
	{
		hex[x] = hexvalues[n % 16];
		n /= 16;
	}
	for (x--; x >= 0; *i += 1, x--)
	{
		buffer[*i] = hex[x];
	}
	free(hex);
}
