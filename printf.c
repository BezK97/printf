#include "holberton.h"

/**
 * _check - Function that checks specifiers
 *
 * @sp: specifier to check
 * @arg: argument
 */
void _check(char sp, va_list arg)
{
	switch (sp)
	{
	case 'c':
		_putchar((char) va_arg(arg, int));
		break;
	case 'd':
		format_int(va_arg(arg, int));
		break;
	case 'i':
		format_int(va_arg(arg, int));
		break;
	case 's':
		format_str(va_arg(arg, char *));
		break;
	default:
		_putchar('%');
		_putchar(sp);
		break;
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
	if (!format)
		return (-1);

	va_list arg;
	int n, i = 0;

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
			if (format[n + 1] == '\0')
				break;
			_check(format[n + 1], arg);
			n = n + 2;
		}
		_putchar(format[n]);
		i++;
	}
	va_end(arg);
	return (i);
}
