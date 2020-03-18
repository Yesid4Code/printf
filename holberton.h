#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct formate - structure to choose the format
 * @ftype: type of format to print
 * @funty: function for printing
 */
typedef struct formate
{
	char *ftype;
	int (*funty)(va_list);
} f_type;

int (*get_format(char s))(va_list);

int _printf(const char *format, ...);

int print_char(va_list arg);

int print_string(va_list arg);

int print_int(va_list arg);

int print_decimal(va_list arg);

int print_binary(va_list arg);

int print_reverse(va_list arg);

int print_rot13(va_list arg);

int _strlen(char *c);

void _rot13(char *c);

void rev_string(char *s);

#endif
