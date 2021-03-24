#include "holberton.h"
/**
 * format_r - reverse a string passed in
 *
 * @arg: argument passed in
 * @buffer: values stored
 * @i: returns pointer to index
 */
int format_r(va_list arg, char *buffer, int *i)
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
	return (0);
}

/**
 * format_R - functtion that converts a string into rot13
 * @arg: argument passed
 * @buffer: values stored
 * @i: tracks index position
 */
int format_R(va_list arg, char *buffer, int *i)
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
	return (0);
}
