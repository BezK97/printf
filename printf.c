#include "holberton.h"

/**
 * _check - Function that checks specifiers
 *
 * @sp: specifier to check
 * @arg: argument
 *
 * Return: i, number of character printed
 */
int _check(char sp, va_list arg)
{
	int i = 1;

	switch (sp)
	{
	case 'c':
		i = _putchar((char) va_arg(arg, int));
		return (i);
	case 'd':
		i = format_int(va_arg(arg, int), i);
		return (i);
	case 'i':
		i = format_int(va_arg(arg, int), i);
		return (i);
	case 's':
		i = format_str(va_arg(arg, char *), i);
		return (i);
	case 'u':
		i = format_un(va_arg(arg, unsigned int));
		return (i);
	default:
		return (0);
	}
}

/**
 * _printf - function that prints according to a format
 *
 * @format: String composed of zero ot more characters to print
 *
 * Return: i, number of character printed
 */
int _printf(const char *format, ...)
{
	int n, i = 0;
	va_list arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%')
		{
			if (format[n + 1] == '%')
			{
				_putchar('%');
				i++;
				n = n + 2;
				for (; format[n] != '\0'; n++)
				{
					_putchar(format[n]);
					i++;
				}
				break;
			}
			else if (format[n + 1] == '\0')
				_putchar(format[n]);
			i = i + _check(format[n + 1], arg);
			n = n + 2;
		}
		_putchar(format[n]);
		i++;
	}
	va_end(arg);
	return (i);
}
