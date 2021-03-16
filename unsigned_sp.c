#include "holberton.h"

void format_un(unsigned int num)
{
	int d = 1;

	for (; num / d > 9; )
	{
		d = d * 10;
	}
	while (d > 0)
	{
		_putchar('0' + (num / d));
		num = num % d;
		d = d / 10;
	}
}
