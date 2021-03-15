#include "holberton.h"

/**
 * format_int - Function that prints integer
 *
 * @num: integer to print
 *
 */
void format_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		format_int(num / 10);
	}
	_putchar(num % 10 + '0');
}
