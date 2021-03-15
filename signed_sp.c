#include "holberton.h"

/**
 * format_int - Function that prints integer
 *
 * @num: integer to print
 *
 */
void format_int(int num)
{
	unsigned int n;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}
	if (n >= 10)
	{
		format_int(n / 10);
	}
	_putchar(n % 10 + '0');
}
