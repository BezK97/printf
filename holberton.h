#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct vtype - Struct to map format specifier with function
 *
 * @sp: conversion specifier
 * @fo: pointer to function corresponding the specifier
 */
typedef struct vtype
{
	char sp;
	void (*fo)();
} vtype_t;

void _putchar(char *buffer, int *i);
void reset_putchar(char *buffer);
int _printf(const char *format, ...);
void format_str(va_list arg, char *buffer, int *i);
void format_c(va_list arg, char *buffer, int *i);
void format_pers(__attribute__((unused))va_list arg, char *buffer, int *i);
void format_d(va_list arg, char *buffer, int *i);
void format_u(va_list arg, char *buffer, int *i);
void format_p(va_list arg, char *buffer, int *i);
void format_o(va_list arg, char *buffer, int *i);
void format_x(va_list arg, char *buffer, int *i);
void format_X(va_list arg, char *buffer, int *i);
void format_r(va_list arg, char *buffer, int *i);
void format_R(va_list arg, char *buffer, int *i);

void func_sp(va_list arg, char *buffer, const char *format, int n, int *i);
char *itos(char str[], long int n);
char *utos(char str[], unsigned int num);
int num_len(unsigned int num);
int _strlen(char *s);

#endif
