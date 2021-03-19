#include "holberton.h"

/**
 *func_sp -function that contains specifiers and corresponding argument.
 *
 *@arg: list of argument.
 *@buffer: array of string containing integer.
 *@format:String composed of zero ot more characters to print
 *@n: Integers that contains the index of the string.
 *@i:pointer to number of character.
 */
void func_sp(va_list arg, char *buffer, const char *format, int n, int *i)
{
	int j;

	vtype_t specifier[] = {
		{'c', format_c}, {'s', format_str},
		{'%', format_pers}, {'d', format_d},
		{'i', format_d}, {'p', format_p}, {'u', format_u},
		{'o', format_o}, {'x', format_x}, {'X', format_X},
		{'r', format_r}, {'R', format_R}, {'b', format_b}
	};

	for (j = 0; specifier[j].sp != '\0'; j++)
	{
		if (specifier[j + 1].sp == '\0')
		{
			buffer[*i] = format[n - 1];
			*i += 1;
			buffer[*i] = format[n];
			*i += 1;
		}
		if (format[n] == specifier[j].sp)
		{
			specifier[j].fo(arg, buffer, i);
			break;
		}
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
	char buffer[1024];
	int n, x = 0, *i = &x;

	va_list arg;

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
		if (format[n] == '%' && format[n + 1] == '\0')
			return (-1);
		if (format[n] == '%' && format[n + 1] != '\0')
		{
			n++;
			func_sp(arg, buffer, format, n, i);
		}
	}
	va_end(arg);
	buffer[*i] = '\0';
	_putchar(buffer, i);
	return (*i);
}
