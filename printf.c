#include "holberton.h"

/**
 * _printf - function that prints according to a format
 *
 * @format: String composed of zero ot more characters to print
 *
 * Return: i, number of character printed
 */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int n, j, x = 0, *i = &x;

	va_list arg;
	vtype_t specifier[] = {{'c', format_c}, {'s', format_str},
			       {'%', format_pers}, {'d', format_d},
			       {'i', format_d}, {'p', format_p}, {'u', format_u},
			       {'o', format_o}, {'x', format_x}, {'X', format_X}
	};
	if (!format)
		return (-1);
	va_start(arg, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		for (; format[n] != '%' && format[n] != '\0'; *i += 1, n++)
		{
			if (*i == 1024)
			{
				_putchar(buffer, i);
				reset_putchar(buffer);
				*i = 0;
			}
			buffer[*i] = format[n];
		}
		if (format[n] == '\0')
			break;
		if (format[n] == '%')
		{
			n++;
			for (j = 0; specifier[j].sp != '\0'; j++)
			{
				if (format[n] == specifier[j].sp)
				{
					specifier[j].fo(arg, buffer, i);
					break;
				}
			}
		}
	}
	va_end(arg);
	buffer[*i] = '\0';
	_putchar(buffer, i);
	return (*i);
}
