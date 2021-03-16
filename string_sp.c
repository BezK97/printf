#include "holberton.h"

/**
 * format_str - Function that prints string
 *
 * @str: Pointer to string
 * @i: index
 *
 * Return: i, number of character printed
 */
int format_str(char *str, int i)
{
	if (*str == '\0')
		return (0);
	_putchar(*str);
	str++;
	format_str(str, i);
	i++;
	return (i);
}
