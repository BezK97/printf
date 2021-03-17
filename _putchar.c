#include <unistd.h>
#include "holberton.h"
#define BUFSIZE 1024

/**
 * _putchar - writes the character c to stdout
 *
 * @buffer: The characters to print
 * @i: pointer to number of character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char *buffer, int *i)
{
	write(1, buffer, *i);
}
