#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} output_print;

int _printf(const char *format, ...);
int _putchar(char c);
int string_output(va_list val);
int char_output(va_list val);
int percent_output(void);
int len_of_str(char *s);
int int_output(va_list args);
int dec_output(va_list args);
int bin_output(va_list val);
unsigned int va_arg(val, unsigned int);
int unsigned_output(va_list args);
int oct_output(va_list val);
int hex_output(va_list val);
#endif
