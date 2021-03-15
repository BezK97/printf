#include "holberton.h"

/**
 * format_str - Function that prints string
 *
 * @str: Pointer to string
 */
void format_str(char *str)
{
	if (*str == '\0')
		return;
	_putchar(*str);
	str++;
	format_str(str);
}
