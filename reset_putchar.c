#include "holberton.h"

/**
 * reset_putchar - Function that resets memory of buffer
 *
 * @buffer: memory to reset
 */
void reset_putchar(char *buffer)
{
        int i;

        for (i = 0; i < 1024; i++)
        {
                buffer[i] = 0;
        }
        buffer[i] = '\0';
}
