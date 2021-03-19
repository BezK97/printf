#include "holberton.h"
/**
 * format_r - reverse a string passed in
 *
 * @arg: argument passed in
 * @buffer: values stored
 * @i: returns pointer to index
 */
void format_r(va_list arg, char *buffer, int *i)
{
	int n, strlen;
	char *s;

	s = va_arg(arg, char*);
	strlen = _strlen(s) - 1;
	if (s == NULL)
	{
		s = "(null)";
	}
	for (n = strlen; n >= 0; n--, *i += 1)
	{
		if (*i == 1024)
		{
			_putchar(buffer, i);
			reset_putchar(buffer);
			*i = 0;
		}
		buffer[*i] = s[n];
	}
}

/**
 * format_R - functtion that converts a string into rot13
 * @arg: argument passed
 * @buffer: values stored
 * @i: tracks index position
 */
void format_R(va_list arg, char *buffer, int *i)
{
	char *s, *s1, *s2;
	int k, j;

	s = va_arg(arg, char*);
	s1 = "abcdefghijklmABCDEFGHIJKLM ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";
	s2 = "nopqrstuvwxyzNOPQRSTUVWXYZ ,?!;'@-=+\"\\$%^&*()`~<>/:[]{}_|.\n";

	for (k = 0; s[k] != '\0'; k++, *i += 1)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[k] == s1[j])
				buffer[*i] = s2[j];
			else if (s[k] == s2[j])
				buffer[*i] = s1[j];
		}
	}
}
/**
 * format_b - Function that  convert unsigned int  to binary
 *
 * @arg: argument passed in
 * @buffer: values stored
 * @i: returns pointer to index
 */
void format_b(va_list arg, char *buffer, int *i)
{
	unsigned int n, m;
	int *num, j, count = 0;
	char *num_str, *num_str2;

	n = va_arg(arg, int);
	m = n;
	if (n == 0)
		count++;
	for (; m != 0; count++)
	{
		m = m / 2;
	}
	num = malloc(sizeof(int) * count);
	num_str = malloc(sizeof(char) * count);
	num_str2 = malloc(sizeof(char) * count);
	if (num == NULL || num_str == NULL)
		exit(-1);
	for (j = 0; n > 0; j++)
	{
		num[j] = n % 2;
		n = n / 2;
	}

	for (j = 0; j < count; j++)
	{
		itos(num_str, num[j]);
		num_str2[j] = num_str[0];
	}

	for (*i = 0, count--; count >= 0; *i += 1, count--)
	{
		buffer[*i] = num_str2[count];
	}

	_putchar(buffer, i);
	*i = 0;
}
