#include "holberton.h"

/**
 *flag_spc - function that print a space before a positive value
 *
 *@arg: list of argument
 *@buffer: array of string containing integer.
 *@format:String composed of zero ot more characters to print
 *@n: Integers that contains the index of the string.
 *@i:pointer to number of character.
 *
 * Return: coutn, length
 */
int flag_spc(va_list arg, char *buffer, const char *format, int n, int *i)
{
	int x, j, numlen, count = 0;
	char *num_str;

	if (format[n + 1] == 'd' || format[n + 1] == 'i')
	{
		x = va_arg(arg, long int);

		numlen = num_len(x);
		numlen += 1;
		num_str = malloc(numlen * sizeof(char));
		if (num_str == NULL)
			return (0);
		if (x >= 0)
		{
			num_str[0] = ' ';
		}
		itos(num_str, x);

		for (x = *i, j = 0; j < numlen; *i += 1, x++, j++)
		{
			if (*i == 1024)
			{
				_putchar(buffer, i);
				reset_putchar(buffer);
				*i = 0;
			}
			buffer[*i] = num_str[j];
			count = 1;
		}
		free(num_str);
	}
	else
	{
		buffer[*i] = format[n - 1];
		*i += 1;
		buffer[*i] = format[n];
		*i += 1;
	}
	return (count);
}
