#include "holberton.h"

/**
 * format_int - Function that prints integer
 *
 * @num: integer to print
 * @i: index
 *
 * Return: i, number of printed character
 */
int format_int(int num, int i)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		i++;
	}
	if (num / 10 != 0)
	{
		format_int(num / 10, i);
	}
	_putchar(num % 10 + '0');
	i++;
	return (i);
}
